//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditIngredient.h"
#include "DataModule.h"
#include "Admin.h"
#include "Authorization.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditFood.h"
#include "EditPersonal.h"
#include "eMenuPCH1.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFEditIngredient *FEditIngredient;
//---------------------------------------------------------------------------
__fastcall TFEditIngredient::TFEditIngredient(TComponent* Owner)
	: TForm(Owner)
{
}
void TIngredient::setId_ingredient(int a ){ this->id_ingredient = a;}
int TIngredient::getId_ingredient(){ return this->id_ingredient;}

void TIngredient::setInfoIngredient(AnsiString name,AnsiString unt,float prc,float cnt){
	this->name_ingredient = name;
	this->unit = unt;
	this->price = prc;
	this->count_unit= cnt;
}

void TIngredient::InsertDBIngredient(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("INSERT INTO eMenu.dbo.ListIngredientFood(kod_food,name_ingredient,counts,unit,price)");
	DM->TSQL->SQL->Add("VALUES(:id,:name,:cnt,:unt,:prc)");
	DM->TSQL->Parameters->ParamByName("id")->Value = this->getIdFood();
	DM->TSQL->Parameters->ParamByName("name")->Value =  this->name_ingredient;
	DM->TSQL->Parameters->ParamByName("cnt")->Value =  this->count_unit;
	DM->TSQL->Parameters->ParamByName("unt")->Value =  this->unit;
	DM->TSQL->Parameters->ParamByName("prc")->Value = this->price;
	DM->TSQL->ExecSQL();
}
void TIngredient::DeleteDBIngredient(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("DELETE FROM eMenu.dbo.ListIngredientFood");
	DM->TSQL->SQL->Add("WHERE id_listingrfood = :id");
	DM->TSQL->Parameters->ParamByName("id")->Value = this->id_ingredient;
	DM->TSQL->ExecSQL();
}
void __fastcall TFEditIngredient::ButtonAccceptClick(TObject *Sender)
{
	try{

	TIngredient ingredient;
	ingredient.setIdFood(StrToInt(FEditFood->EditID->Text));
	ingredient.setInfoIngredient(Edit_name_ingredient->Text,\
								 CB_unit->Text,\
								 StrToFloat(Edit_price->Text),\
								 StrToFloat(Edit_count->Text));
	ingredient.InsertDBIngredient();
    DM->RefreshADO(DM->ATFoodIngredient);
	FEditIngredient->Hide();
	}
	catch(...){
        MessageBox(NULL, L"�� ���� ������ ���!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFEditIngredient::FormShow(TObject *Sender)
{
	Edit_name_ingredient->Clear();
	Edit_count->Text = 0;
	Edit_price->Text = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFEditIngredient::ButtonCancelClick(TObject *Sender)
{
    FEditIngredient->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TFEditIngredient::Edit_countKeyPress(TObject *Sender, System::WideChar &Key)

{
if( Key == VK_BACK || (Key == ',')) return;
if( (Key < L'0') || (Key > L'9') ) Key = 0;
}
//---------------------------------------------------------------------------


void __fastcall TFEditIngredient::Edit_priceKeyPress(TObject *Sender, System::WideChar &Key)

{
if( Key == VK_BACK || (Key == ',')) return;
if( (Key < L'0') || (Key > L'9') ) Key = 0;
}
//---------------------------------------------------------------------------


