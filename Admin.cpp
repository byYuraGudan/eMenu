//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Admin.h"
#include "eMenuPCH1.h"
#include "DataModule.h"
#include "MainForm.h"
#include "Authorization.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditFood.h"
#include "EditPersonal.h"
#include "EditIngredient.h"
#include "EditTabel.h"
#include "EditOrderMenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAdmin *FAdmin;
//---------------------------------------------------------------------------
__fastcall TFAdmin::TFAdmin(TComponent* Owner)
	: TForm(Owner)
{
   	PanelPersonal->Align = alClient;
	PanelFood->Align = alClient;
	PanelCategory->Align = alClient;
	PanelDiscount->Align = alClient;
	PanelOrderMenu->Align = alClient;
	LookPanel->Align = alClient;
    PanelTable->Align = alClient;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewPersonalClick(TObject *Sender)
{
      this->HidePanel(Sender);
	  PanelPersonal->Show();
}
//---------------------------------------------------------------------------




void __fastcall TFAdmin::buttonAddPersonalClick(TObject *Sender)
{
    FEditPersonal->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonAddCategoryClick(TObject *Sender)
{
	FEditCategory->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::Button8Click(TObject *Sender)
{
	FEditFood->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewCategoryClick(TObject *Sender)
{
	  this->HidePanel(Sender);
	  PanelCategory->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewFoodClick(TObject *Sender)
{
	  this->HidePanel(Sender);
	  PanelFood->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewOrderMenuClick(TObject *Sender)
{
	  this->HidePanel(Sender);
	  PanelOrderMenu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewDiscountClick(TObject *Sender)
{
	this->HidePanel(Sender);
	PanelDiscount->Show();
}
//---------------------------------------------------------------------------

void TFAdmin::HidePanel(TObject *Sender){
    PanelDiscount->Hide();
	PanelPersonal->Hide();
	PanelFood->Hide();
	PanelCategory->Hide();
	PanelOrderMenu->Hide();
	LookPanel->Hide();
    PanelTable->Hide();
}

//---------------------------------------------------------------------------



void __fastcall TFAdmin::DeleteCategoyClick(TObject *Sender)
{
	try {
		if (IDYES == MessageBox(NULL, L"�� ��������, �� ������ �������� ?", L"ϳ����������!",  MB_YESNO |MB_ICONQUESTION))
		{
		TCategory category;
		category.setId_category(DM->ATCategory->FieldByName("id_category")->AsInteger);
		category.DeleteDBCategory();
		DM->OpenDB();
		}
	}
	catch(...){
		MessageBox(NULL, L"����, ���'������ � ����� ���������. �� ������� ��������!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::AddCategoryClick(TObject *Sender)
{
    FEditCategory->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::EditCategoryClick(TObject *Sender)
{
	FEditCategory->Show();
	FEditCategory->EditID->Text = DM->ATCategory->FieldByName("id_category")->AsAnsiString;
	FEditCategory->edit_name_category->Text = DM->ATCategory->FieldByName("name_category")->AsAnsiString;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::EditSearchCategoryChange(TObject *Sender)
{
   	AnsiString tmp = EditSearchCategory->Text;
	DM->ATCategory->Filtered = false;
	if (tmp.Length()!=0){
		DM->ATCategory->Filter = "name_category like '%"+tmp+"%'";
        DM->ATCategory->Filtered = true;
	}

}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::Button2Click(TObject *Sender)
{
	FEditDiscount->Show();
	FEditDiscount->add = true;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::AddDiscountClick(TObject *Sender)
{
	FEditDiscount->Show();
	FEditDiscount->add = true;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::EditDiscountClick(TObject *Sender)
{
	FEditDiscount->Show();
	FEditDiscount->add = false;
	FEditDiscount->edit_id->Text = DM->ATDiscountid_discount->Value;
	FEditDiscount->edit_pib_client->Text = DM->ATDiscountpib_client->Value;
	FEditDiscount->edit_discount->Text = DM->ATDiscountdiscount->Value;
	FEditDiscount->edit_telefon->Text = DM->ATDiscounttelefon->Value;
	FEditDiscount->edit_adress->Text = DM->ATDiscountadress->Value;
	FEditDiscount->date_birthday->Date = DM->ATDiscount->FieldByName("birthday")->AsDateTime;
	FEditDiscount->Button1->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::DeleteDiscountClick(TObject *Sender)
{
	try {
		if (IDYES == MessageBox(NULL, L"�� ��������, �� ������ �������� ?", L"ϳ����������!",  MB_YESNO |MB_ICONQUESTION))
		{
			TDiscount discount;
			discount.setId_discount(DM->ATDiscountid_discount->Value);
			discount.DeleteDBDiscount();
			DM->OpenDB();
		}
	}
	catch(...){
		MessageBox(NULL, L"����, ���'������ � ����� ���������. �� ������� ��������!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------







void __fastcall TFAdmin::EditPersonalClick(TObject *Sender)
{
	FEditPersonal->Show();
	FEditPersonal->add = false;
	FEditPersonal->ButtonRelease->Show();
	FEditPersonal->edit_date_release->Show();
	FEditPersonal->Label3->Show();
	FEditPersonal->EditID->Text = DM->ATPersonal->FieldByName("id_personal")->AsAnsiString;
	FEditPersonal->edit_login->Text = DM->ATPersonal->FieldByName("logins")->AsAnsiString;
	FEditPersonal->edit_password->Text = DM->ATPersonal->FieldByName("passwords")->AsAnsiString;
	FEditPersonal->edit_pib_personal->Text = DM->ATPersonal->FieldByName("pib_personal")->AsAnsiString;
	FEditPersonal->edit_telefon->Text = DM->ATPersonal->FieldByName("telefon")->AsAnsiString;
	FEditPersonal->PersonalAccess->Checked = DM->ATPersonal->FieldByName("access")->AsBoolean;
	FEditPersonal->PersonalActivity->Checked = DM->ATPersonal->FieldByName("activity")->AsBoolean;
	FEditPersonal->date_work->Date = DM->ATPersonal->FieldByName("data_of_work")->AsDateTime;
	FEditPersonal->date_birthday->Date = DM->ATPersonal->FieldByName("birthday")->AsDateTime;
	FEditPersonal->edit_date_release->Text = DM->ATPersonal->FieldByName("release_date")->AsAnsiString;
	FEditPersonal->edit_adress->Text = DM->ATPersonal->FieldByName("adress")->AsAnsiString;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::AddPersonaClick(TObject *Sender)
{
	FEditPersonal->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::EditSearchPersonalChange(TObject *Sender)
{
	AnsiString tmp = EditSearchPersonal->Text;
	DM->ATPersonal->Filtered = false;
	if (tmp.Length()!=0){
		DM->ATPersonal->Filter = "logins like '%"+tmp+"%' or pib_personal like '%"+tmp+"%'";
		DM->ATPersonal->Filtered = true;
	}
}
//--------------------------------------1-------------------------------------

void __fastcall TFAdmin::DeletePersonalClick(TObject *Sender)
{
   try {
		if (IDYES == MessageBox(NULL, L"�� ��������, �� ������ �������� ?", L"ϳ����������!",  MB_YESNO |MB_ICONQUESTION))
		{
			if(DM->ATPersonal->FieldByName("id_personal")->AsInteger != 1){
				TPersonal personal;
				personal.setId_personal(DM->ATPersonal->FieldByName("id_personal")->AsInteger);
				personal.DeleteDBPersonal();
				DM->OpenDB();
			} else MessageBox(NULL, L"��������� ������������ ������������� ����������!", L"³�����!",  MB_OK |MB_ICONERROR);
		}
	}
	catch(...){
		MessageBox(NULL, L"����, ���'������ � ����� ���������. �� ������� ��������!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------



void __fastcall TFAdmin::N4Click(TObject *Sender)
{
    FAuth->NotUserStatus(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::N5Click(TObject *Sender)
{
    FMainForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::N2Click(TObject *Sender)
{
    DM->OpenDB();
}
//---------------------------------------------------------------------------


void __fastcall TFAdmin::AddFoodClick(TObject *Sender)
{
	FEditFood->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::EditFoodClick(TObject *Sender)
{
	 FEditFood->Show();
	 FEditFood->add = false;
	 FEditFood->CB_id_category->Text = DM->ATFood->FieldByName("kod_category")->AsString;
	 FEditFood->CB_name_category->Text = DM->ATFood->FieldByName("name_category")->AsString;
	 FEditFood->CB_unit->Text =  DM->ATFood->FieldByName("unit_food")->AsString;
	 FEditFood->EditID->Text = DM->ATFood->FieldByName("id_food")->AsString;
	 FEditFood->Edit_cost_price->Text =  DM->ATFood->FieldByName("cost_price_food")->AsString;
	 FEditFood->Edit_mark_up->Text =  DM->ATFood->FieldByName("mark_up")->AsString;
	 FEditFood->Edit_price->Text =  DM->ATFood->FieldByName("price_food")->AsString;
	 FEditFood->Edit_name_food->Text =  DM->ATFood->FieldByName("name_food")->AsString;
	 FEditFood->Edit_weight->Text =  DM->ATFood->FieldByName("weight_food")->AsString;
     FEditFood->CBvisible->Checked = DM->ATFood->FieldByName("visible")->AsBoolean;
	 FEditFood->Image1->Picture->Assign(DM->ATFood->FieldByName("picture"));
}
//---------------------------------------------------------------------------


void __fastcall TFAdmin::DeleteFoodClick(TObject *Sender)
{
   try {
		if (IDYES == MessageBox(NULL, L"�� ��������, �� ������ �������� ?", L"ϳ����������!",  MB_YESNO |MB_ICONQUESTION))
		{
				TFood food;
				food.setIdFood(DM->ATFoodid_food->Value);
				food.DeleteDBFood();
				DM->OpenDB();
		}
	}
	catch(...){
		MessageBox(NULL, L"����, ���'������ � ����� �����������. �� ������� ��������!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::EditSearchFoodChange(TObject *Sender)
{
	AnsiString tmp = EditSearchFood->Text;
	DM->ATFood->Filtered = false;
	if (tmp.Length()!=0){
		DM->ATFood->Filter = "name_food like '%"+tmp+"%' or name_category like '%"+tmp+"%'";
		DM->ATFood->Filtered = true;
	}
}
//---------------------------------------------------------------------------



void __fastcall TFAdmin::ButtonViewTableClick(TObject *Sender)
{
	this->HidePanel(Sender);
	PanelTable->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::EditSearchTableChange(TObject *Sender)
{
	AnsiString tmp = EditSearchTable->Text;
	DM->ATListTable->Filtered = false;
	if (tmp.Length()!=0){
		DM->ATListTable->Filter = "name_table like '%"+tmp+"%'";
        DM->ATListTable->Filtered = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::AddTableClick(TObject *Sender)
{
    FEditTable->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::DeleteTableClick(TObject *Sender)
{
	  try {
		if (IDYES == MessageBox(NULL, L"�� ��������, �� ������ �������� ?", L"ϳ����������!",  MB_YESNO |MB_ICONQUESTION))
		{
				TListTable table;
				table.setId_table(DM->ATListTable->FieldByName("id_table")->AsInteger);
				table.DeleteDBListTable();
				DM->OpenDB();
		}
	}
	catch(...){
		MessageBox(NULL, L"����, ���'������ � ����� �����������. �� ������� ��������!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::ButtonAddListTableClick(TObject *Sender)
{
    FEditTable->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::InvOcupTableClick(TObject *Sender)
{
     TListTable table;
	 table.setId_table(DM->ATListTable->FieldByName("id_table")->AsInteger);
	 table.UpdateInverseOccupation();
     DM->RefreshADO(DM->ATListTable);
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::N7Click(TObject *Sender)
{
    FEditOrderMenu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::AddOrderMenuClick(TObject *Sender)
{
    FEditOrderMenu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::DeleteOrderMenuClick(TObject *Sender)
{
	  try {
		if (IDYES == MessageBox(NULL, L"�� ��������, �� ������ �������� ?", L"ϳ����������!",  MB_YESNO |MB_ICONQUESTION))
		{
				TOrderMenu order;
				order.setIdOrder(DM->ATOrderMenu->FieldByName("id_order")->AsInteger);
				order.DeleteDBOrderMenu();
				DM->OpenDB();
		}
	}
	catch(...){
		MessageBox(NULL, L"����, ���'������ � ����� �����������. �� ������� ��������!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------



void __fastcall TFAdmin::ButtonDayReportClick(TObject *Sender)
{
	DM->DoSQL(DM->TSQL,"SELECT 	SUM(payment - (payment * discount/100)) AS DayPayment  \
	FROM ((OrderMenu INNER JOIN  Discounts ON id_discount = kod_discount)\
	INNER JOIN Personal ON id_personal = kod_personal)\
	INNER JOIN ListTable ON id_table = kod_table \
	WHERE date_open_order >= '"+DateToStr(Date())+" 00:00:00' and date_open_order <= '"+DateToStr(Date())+" 23:59:59'");
	ShowMessage("����� �������� - "+DM->TSQL->FieldByName("DayPayment")->AsString+" ���.");
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewListOrderMenuClick(TObject *Sender)
{
    FEditOrderMenu->Show();
}
//---------------------------------------------------------------------------

