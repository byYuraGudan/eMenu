//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditFood.h"
#include "DataModule.h"
#include "Admin.h"
#include "Authorization.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditIngredient.h"
#include "EditPersonal.h"
#include "eMenuPCH1.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFEditFood *FEditFood;
//---------------------------------------------------------------------------
__fastcall TFEditFood::TFEditFood(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFEditFood::EditImageClick(TObject *Sender)
{
   TMemoryStream *str = new TMemoryStream;
   Image1->Picture->SaveToStream(str);
   DM->TSQL->SQL->Clear();
   DM->TSQL->SQL->Add("UPDATE eMenu.dbo.Food SET picture = :P1");
   DM->TSQL->Parameters->ParamByName("P1")->DataType = ftBlob;
   DM->TSQL->Parameters->ParamByName("P1")->LoadFromStream(str,ftBlob);
   DM->TSQL->ExecSQL();
}
//---------------------------------------------------------------------------

