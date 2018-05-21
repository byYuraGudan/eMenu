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
	  PanelCategory->Show();
	  PanelFood->Hide();
	  PanelPersonal->Hide();
	  PanelDiscount->Hide();
	  PanelOrderMenu->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewFoodClick(TObject *Sender)
{
	  PanelFood->Show();
	  PanelPersonal->Hide();
	  PanelCategory->Hide();
	  PanelDiscount->Hide();
	  PanelOrderMenu->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewOrderMenuClick(TObject *Sender)
{
	  PanelOrderMenu->Show();
	  PanelPersonal->Hide();
	  PanelFood->Hide();
	  PanelCategory->Hide();
	  PanelDiscount->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::buttonViewDiscountClick(TObject *Sender)
{
	PanelDiscount->Show();
	PanelPersonal->Hide();
	PanelFood->Hide();
	PanelCategory->Hide();
	PanelOrderMenu->Hide();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

