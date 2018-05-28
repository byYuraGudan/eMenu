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
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewPersonalClick(TObject *Sender)
{
	  PanelPersonal->Show();
	  PanelFood->Hide();
	  PanelCategory->Hide();
	  PanelDiscount->Hide();
      PanelOrderMenu->Hide();
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
    DM->auth = false;
}

//---------------------------------------------------------------------------



void __fastcall TFAdmin::DeleteCategoryClick(TObject *Sender)
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

