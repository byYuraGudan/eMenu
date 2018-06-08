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
void TOrderMenu::setDateOrder(TDateTime open,TDateTime close) {
	this->date_open_order = open;
	this->date_close_order = close;
}
void TOrderMenu::setCloseOrder(bool b){ this->close_order = b;}
void TOrderMenu::setPayment(float f){ this->payment = f;}
void TOrderMenu::CloseOrderMenu(){

}
void TOrderMenu::UpdatePayment(){

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
	DM->DoSQLExec(DM->TSQL,\
	"UPDATE eMenu.dbo.OrderMenu SET kod_discount ="+IntToStr(this->getId_discount())+\
	"WHERE id_order = "+IntToStr(this->id_order));

}

void TListOrder::setIdListingrfood(int i){ this->id_listingrfood = i}
int TListOrder::getIdListingrfood(){return this->id_listingrfood;}
void TListOrder::setListCounts(int i){this->counts = i;}
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
	"DELETE FROM eMenu.dbo.ListOrderMenu where id_listingrfood ="+IntToStr(this->id_listingrfood);
	} catch(...){MessageBox(NULL, L"�� ������� ��������!", L"³�����!",  MB_OK | MB_ICONERROR);
}




void __fastcall TFEditOrderMenu::Button6Click(TObject *Sender)
{
   ShowMessage(DM->OTNotOcupTable->FieldByName("id_table")->AsString);
}
//---------------------------------------------------------------------------

void __fastcall TFEditOrderMenu::Button1Click(TObject *Sender)
{
	TOrderMenu order;
	order.InsertDBOrderMenu();
	DM->OpenDBOficiant();
}
//---------------------------------------------------------------------------

void __fastcall TFEditOrderMenu::FormClose(TObject *Sender, TCloseAction &Action)

{
    FMainForm->Show();
}
//---------------------------------------------------------------------------



void __fastcall TFEditOrderMenu::CB_id_orderChange(TObject *Sender)
{
	try{
	DM->DoSQL(DM->OTListOrder,\
	"SELECT   id_listordermenu, kod_order, kod_food,name_food,counts,price_food, counts * price_food AS Suma\
	FROM eMenu.dbo.ListOrderMenu INNER JOIN eMenu.dbo.Food ON id_food = kod_food WHERE kod_order = "+CB_id_order->Text);
	}
	catch(...){
		MessageBox(NULL, L"������ ���������� �� ����", L"³�����!",  MB_OK | MB_ICONERROR);
	}
}
//---------------------------------------------------------------------------


void __fastcall TFEditOrderMenu::Button8Click(TObject *Sender)
{
	TListOrder list;

}
//---------------------------------------------------------------------------

