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
		TCategory category;
		category.setId_category(DM->ATCategory->FieldByName("id_category")->AsInteger);
		category.DeleteDBCategory(); }
	catch(...){
          ShowMessage("������� �������� ���������� ��� ��������! ��������� ���� ���'������ � ���� ��������");
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
	FEditDiscount->edit_birthday->Text = DM->ATDiscount->FieldByName("birthday")->AsString;
    FEditDiscount->Button1->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::DeleteDiscountClick(TObject *Sender)
{
	TDiscount discount;
	discount.setId_discount(DM->ATDiscountid_discount->Value);
    discount.DeleteDBDiscount();
}
//---------------------------------------------------------------------------



