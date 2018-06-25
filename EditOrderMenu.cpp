//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditOrderMenu.h"
#include "Admin.h"
#include "Authorization.h"
#include "DataModule.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditFood.h"
#include "EditIngredient.h"
#include "EditPersonal.h"
#include "EditTabel.h"
#include "eMenuPCH1.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFEditOrderMenu *FEditOrderMenu;
//---------------------------------------------------------------------------
__fastcall TFEditOrderMenu::TFEditOrderMenu(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TOrderMenu::setIdOrder(int a){ this->id_order  = a;}
int TOrderMenu::getIdOrder(){ return this->id_order;}
void TOrderMenu::setDateOrder(TDateTime open,TDateTime close) {
	this->date_open_order = open;
	this->date_close_order = close;
}
void TOrderMenu::setCloseOrder(bool b){ this->close_order = b;}
void TOrderMenu::setPayment(float f){ this->payment = f;}

	void TOrderMenu::CloseOrderMenu(){
	DM->DoSQLExec(DM->TSQL,"UPDATE eMenu.dbo.OrderMenu SET date_close_order = GETDATE(), close_order = 1 WHERE id_order = "+IntToStr(this->getIdOrder()));
}
void TOrderMenu::UpdatePayment(){

	DM->DoSQL(DM->TSQL,"SELECT sum(counts*price_food) as price_all\
	FROM dbo.ListOrderMenu INNER JOIN dbo.Food ON id_food = kod_food WHERE kod_order = "+IntToStr(this->id_order));
	float val = DM->TSQL->FieldByName("price_all")->AsFloat;
	if(DM->TSQL->RecordCount!=0){
		DM->TSQL->SQL->Clear();
		DM->TSQL->SQL->Add("UPDATE eMenu.dbo.OrderMenu SET payment = :pay WHERE id_order = :id");
		DM->TSQL->Parameters->ParamByName("pay")->Value = val;
		DM->TSQL->Parameters->ParamByName("id")->Value = this->id_order;
		DM->TSQL->ExecSQL();
	}
	else{
		DM->DoSQLExec(DM->TSQL,"UPDATE eMenu.dbo.OrderMenu SET payment = 0 WHERE id_order ="+IntToStr(this->id_order));
	}

}

void TOrderMenu::InsertDBOrderMenu(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("INSERT INTO eMenu.dbo.OrderMenu(kod_table,kod_personal,kod_discount)");
	DM->TSQL->SQL->Add("VALUES(:t,:p,:d)");
	DM->TSQL->Parameters->ParamByName("t")->Value =  this->getId_table();
	DM->TSQL->Parameters->ParamByName("p")->Value =  this->getId_personal();
	DM->TSQL->Parameters->ParamByName("d")->Value =  this->getId_discount();
	DM->TSQL->ExecSQL();
}

void TOrderMenu::UpdateDBOrderMenu(){

}

void TOrderMenu::DeleteDBOrderMenu(){
	DM->DoSQLExec(DM->TSQL,"DELETE FROM eMenu.dbo.ListOrderMenu WHERE kod_order ="+IntToStr(this->id_order));
	DM->DoSQLExec(DM->TSQL,"DELETE FROM eMenu.dbo.OrderMenu WHERE id_order ="+IntToStr(this->id_order));
}
void TOrderMenu::UpdateDiscount(){
	DM->DoSQL(DM->TSQL,"Select * FROM eMenu.dbo.Discounts WHERE id_discount = "+IntToStr(this->getId_discount()));
	if(DM->TSQL->RecordCount!=0){
		DM->DoSQLExec(DM->TSQL,\
		"UPDATE eMenu.dbo.OrderMenu SET kod_discount ="+IntToStr(this->getId_discount())+\
		"WHERE id_order = "+IntToStr(this->id_order));
	} else MessageBox(NULL, L"���� ���������� ���'����� � ������ �������", L"³�����!",  MB_OK |MB_ICONWARNING);

}

void TListOrder::setIdListingrfood(int i){ this->id_listingrfood = i;}
int TListOrder::getIdListingrfood(){return this->id_listingrfood;}
void TListOrder::setListCounts(float i){this->counts = i;}
void TListOrder::InsertDBListOrder(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("INSERT INTO eMenu.dbo.ListOrderMenu(kod_order,kod_food,counts)");
	DM->TSQL->SQL->Add("VALUES(:t,:p,:d)");
	DM->TSQL->Parameters->ParamByName("t")->Value =  this->getIdOrder();
	DM->TSQL->Parameters->ParamByName("p")->Value =  this->getIdFood();
	DM->TSQL->Parameters->ParamByName("d")->Value =  this->counts;
	DM->TSQL->ExecSQL();
}

void TListOrder::DeleteDBListOrder(){
   	try{
	DM->DoSQLExec(DM->TSQL,\
	"DELETE FROM eMenu.dbo.ListOrderMenu where id_listordermenu ="+IntToStr(this->id_listingrfood));
	} catch(...){MessageBox(NULL, L"�� ������� ��������!", L"³�����!",  MB_OK | MB_ICONERROR); }
}






void __fastcall TFEditOrderMenu::FormClose(TObject *Sender, TCloseAction &Action)

{
    FMainForm->Show();
}
//---------------------------------------------------------------------------





void __fastcall TFEditOrderMenu::btnRemovClick(TObject *Sender)
{
  try {
		if (IDYES == MessageBox(NULL, L"�� ��������, �� ������ �������� ?", L"ϳ����������!",  MB_YESNO |MB_ICONQUESTION))
		{
			TListOrder list;
			list.setIdListingrfood(DM->OTListOpenOrder->FieldByName("id_listordermenu")->AsInteger);
			list.setIdOrder(DM->OTListOpenOrder->FieldByName("kod_order")->AsInteger);
			list.DeleteDBListOrder();
			list.UpdatePayment();
			int id = DM->OTOpenOrder->RecNo;
			DM->OpenDBOficiant();
            DM->OTOpenOrder->RecNo = id;
		}
	}
	catch(...){
		//MessageBox(NULL, L"����, ���'������ � ����� �����������. �� ������� ��������!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}



}
//---------------------------------------------------------------------------

void __fastcall TFEditOrderMenu::btnAddToOrderClick(TObject *Sender)
{
    FEditOrderMenu->Hide();
	FMainForm->Show();
}
//---------------------------------------------------------------------------







void __fastcall TFEditOrderMenu::btnDiscountClick(TObject *Sender)
{
	try{
		String str;
		if (InputQuery("������ ����� ��������� ������","������",str)) {
			TOrderMenu order;
    		order.setIdOrder(DM->OTOpenOrder->FieldByName("id_order")->AsInteger);
    		order.setId_discount(StrToInt(str));
			order.UpdateDiscount();
			int id = DM->OTOpenOrder->RecNo;
			DM->OpenDBOficiant();
            DM->OTOpenOrder->RecNo = id;
		}
	} catch(...){
	   MessageBox(NULL, L"��������� ������������ �����!", L"³�����!",  MB_OK | MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFEditOrderMenu::btnReportDayClick(TObject *Sender)
{
	DM->DoSQL(DM->TSQL,"SELECT 	SUM(payment - (payment * discount/100)) AS DayPayment  \
	FROM ((OrderMenu INNER JOIN  Discounts ON id_discount = kod_discount)\
	INNER JOIN Personal ON id_personal = kod_personal)\
	INNER JOIN ListTable ON id_table = kod_table \
	WHERE date_open_order >= '"+DateToStr(Date())+" 00:00:00' and date_open_order <= '"+DateToStr(Date())+" 23:59:59'");
	ShowMessage("����� �������� - "+DM->TSQL->FieldByName("DayPayment")->AsString+" ���.");
}
//---------------------------------------------------------------------------


void __fastcall TFEditOrderMenu::btnOpenOrderClick(TObject *Sender)
{
	String str = DM->OTNotOcupTable->FieldByName("id_table")->AsString;
	if(!str.IsEmpty()){
		TOrderMenu order;
		order.setId_personal(DM->id_user);
		order.setId_discount(0);
		order.setId_table(DM->OTNotOcupTable->FieldByName("id_table")->AsInteger);
		order.UpdateInverseOccupation();
		order.InsertDBOrderMenu();
		DM->OpenDB();
		DM->OTOpenOrder->Last();
	}
	else       {
		MessageBox(NULL, L"���� ������ ����!", L"³�����!",  MB_OK | MB_ICONWARNING);
	 	DM->OpenDB();
	}


}
//---------------------------------------------------------------------------

void __fastcall TFEditOrderMenu::btnCloseOrderClick(TObject *Sender)
{

	try{
		if (!CB_id_order->Text.IsEmpty()){

			int id = DM->OTOpenOrder->FieldByName("id_order")->AsInteger;
			TOrderMenu order;
			order.setIdOrder(id);
			order.setId_table(DM->OTOpenOrder->FieldByName("kod_table")->AsInteger);
			order.setOccupListTable(false);
			order.UpdateOccupation();
			order.CloseOrderMenu();
			DM->OpenDB();
			DM->TSQLCheck->Close();
			DM->TSQLCheck->Open();
			DM->TSQLCheck->Filtered = false;
			DM->TSQLCheck->Filter = "id_order = "+IntToStr(id);
			DM->TSQLCheck->Filtered = true;
			DM->frxCheck->ShowReport();
			ShowMessage("���������� �"+IntToStr(id)+" �������");
		} else
		{
				MessageBox(NULL, L"������� ����������!", L"³�����!",  MB_OK |MB_ICONWARNING);
                DM->OpenDB();
		}
		} catch(...){MessageBox(NULL, L"��������� ������������ �����!", L"³�����!",  MB_OK |MB_ICONWARNING);}
}
//---------------------------------------------------------------------------


void __fastcall TFEditOrderMenu::Button1Click(TObject *Sender)
{
	ShowMessage(DM->OTNotOcupTable->FieldByName("id_table")->AsString) ;
}
//---------------------------------------------------------------------------



void __fastcall TFEditOrderMenu::btnPrintClick(TObject *Sender)
{
	DM->TSQLCheck->Close();
	DM->TSQLCheck->Open();
	DM->TSQLCheck->Filtered = false;
	if (DM->OTOpenOrder->RecordCount !=0) {
	DM->TSQLCheck->Filter = "id_order ="+DM->OTOpenOrder->FieldByName("id_order")->AsString;
	DM->TSQLCheck->Filtered = true;
    DM->frxCheck->ShowReport();
	} else MessageBox(NULL, L"������� ����������!", L"³�����!",  MB_OK |MB_ICONWARNING);

}
//---------------------------------------------------------------------------

