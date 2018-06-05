//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
#include "Admin.h"
#include "DataModule.h"
#include "Authorization.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditFood.h"
#include "EditIngredient.h"
#include "EditPersonal.h"
#include "eMenuPCH1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMainForm *FMainForm;
//---------------------------------------------------------------------------
__fastcall TFMainForm::TFMainForm(TComponent* Owner)
	: TForm(Owner)
{
	AddToOrder->StyleElements = TStyleElements();
	AddToOrder->Font->Color = RGB(78,84,118);
    AddToOrder->Height = 0;
}


//---------------------------------------------------------------------------





void __fastcall TFMainForm::FormShow(TObject *Sender)
{
	FAdmin->Show();
}
//---------------------------------------------------------------------------













void __fastcall TFMainForm::EditMainSearchFoodChange(TObject *Sender)
{
	String tmp = EditMainSearchFood->Text;
	if (tmp.Length()!=0) {
		DM->DoSQL(DM->MQShowFood,"SELECT *, STR(weight_food, 5, 3)+' '+ unit_food AS weight_unit FROM eMenu.dbo.Food WHERE name_food like '%"+tmp+"%'");
		DBCGShowFood->DataSource = DM->MDSQShowFood;
	} else {
		DBCGShowFood->DataSource = DM->MDSShowFood;
		DM->MTShowFood->Refresh();
		DM->MQShowFood->Close();
    }

}
//---------------------------------------------------------------------------









void __fastcall TFMainForm::AddToOrderMouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
	AddToOrder->Color = RGB(239,118,68);
    AddToOrder->Font->Color = clBtnFace;
}
//---------------------------------------------------------------------------

void __fastcall TFMainForm::AddToOrderMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
   AddToOrder->Color = clBtnFace;
   AddToOrder->Font->Color = RGB(78,84,118);
}
//---------------------------------------------------------------------------

