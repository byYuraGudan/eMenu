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
#include "Math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFEditFood *FEditFood;
//---------------------------------------------------------------------------
__fastcall TFEditFood::TFEditFood(TComponent* Owner)
	: TForm(Owner)
{
    add = true;
}
//---------------------------------------------------------------------------


void TFood::setIdFood(int a){ this->id_food = a;}
void TFood::setWeigh_Food(float a){ this->weight_food = a;}
void TFood::setPicture(TMemoryStream* a){ this->picture = a;}
void TFood::setVisible(bool b){ this->visible = b;}
void TFood::setInfoFood(AnsiString name,AnsiString data, AnsiString unit){
	this->name_food = name;
	this->data_food = data;
    this->unit_food = unit;
}

void TFood::setCostFood(float cost,float mark,float price){
	this->cost_price_food = cost;
	this->mark_up = mark;
    this->price_food = price;
}
int TFood::getIdFood(){ return this->id_food;}

void TFood::InsertDBFood(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("INSERT INTO eMenu.dbo.Food(kod_category,name_food,data_food,unit_food,cost_price_food,mark_up,price_food,weight_food,picture,visible)");
	DM->TSQL->SQL->Add("VALUES(:p1,:p2,:p3,:p4,:p5,:p6,:p7,:p8,:pict,:vis)");
	DM->TSQL->Parameters->ParamByName("p1")->Value = this->getId_category();
	DM->TSQL->Parameters->ParamByName("p2")->Value =  this->name_food;
	DM->TSQL->Parameters->ParamByName("p3")->Value =  this->data_food;
	DM->TSQL->Parameters->ParamByName("p4")->Value =  this->unit_food;
	DM->TSQL->Parameters->ParamByName("p5")->Value = this->cost_price_food;
	DM->TSQL->Parameters->ParamByName("p6")->Value = this->mark_up;
	DM->TSQL->Parameters->ParamByName("p7")->Value = this->price_food;
	DM->TSQL->Parameters->ParamByName("p8")->Value = this->weight_food;
	DM->TSQL->Parameters->ParamByName("vis")->Value = this->visible;
	DM->TSQL->Parameters->ParamByName("pict")->DataType = ftBlob;
	DM->TSQL->Parameters->ParamByName("pict")->LoadFromStream(this->picture,ftBlob);
	DM->TSQL->ExecSQL();
}

void TFood::UpdateDBFood(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("UPDATE eMenu.dbo.Food SET visible = :p9, kod_category = :p1, name_food =:p2, data_food =:p3,unit_food =:p4,cost_price_food =:p5, mark_up =:p6, price_food =:p7, weight_food =:p8");
	DM->TSQL->SQL->Add("WHERE id_food = :id");
	DM->TSQL->Parameters->ParamByName("p1")->Value = this->getId_category();
	DM->TSQL->Parameters->ParamByName("p2")->Value =  this->name_food;
	DM->TSQL->Parameters->ParamByName("p3")->Value =  this->data_food;
	DM->TSQL->Parameters->ParamByName("p4")->Value =  this->unit_food;
	DM->TSQL->Parameters->ParamByName("p5")->Value = this->cost_price_food;
	DM->TSQL->Parameters->ParamByName("p6")->Value = this->mark_up;
	DM->TSQL->Parameters->ParamByName("p7")->Value = this->price_food;
	DM->TSQL->Parameters->ParamByName("p8")->Value = this->weight_food;
	DM->TSQL->Parameters->ParamByName("p9")->Value = this->visible;
	DM->TSQL->Parameters->ParamByName("id")->Value = this->id_food;
	DM->TSQL->ExecSQL();
}

void TFood::UpdateFotoDBFood(){
         DM->TSQL->SQL->Clear();
		 DM->TSQL->SQL->Add("UPDATE eMenu.dbo.Food Set picture = :P1 WHERE id_food = :id");
		 DM->TSQL->Parameters->ParamByName("id")->Value = this->id_food;
		 DM->TSQL->Parameters->ParamByName("P1")->DataType = ftBlob;
		 TMemoryStream *str = new TMemoryStream;
		 FEditFood->Image1->Picture->SaveToStream(str);
         DM->TSQL->Parameters->ParamByName("P1")->LoadFromStream(str,ftBlob);
		 DM->TSQL->ExecSQL();
}
void TFood::DeleteDBFood(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("DELETE FROM eMenu.dbo.Food");
	DM->TSQL->SQL->Add("WHERE id_food = :id");
	DM->TSQL->Parameters->ParamByName("id")->Value = this->id_food;
	DM->TSQL->ExecSQL();

}
void __fastcall TFEditFood::ButtonAcceptClick(TObject *Sender)
{
	try{
	TFood food;
	   food.setInfoFood(Edit_name_food->Text,\
						"",\
						CB_unit->Text);
	   food.setCostFood(StrToFloat(Edit_cost_price->Text),\
						StrToFloat(Edit_mark_up->Text),\
						StrToFloat(Edit_price->Text));
	   food.setWeigh_Food(StrToFloat(Edit_weight->Text));
	   food.setId_category(StrToInt(CB_id_category->Text));
	   food.setVisible(CBvisible->Checked);
	   TMemoryStream *str = new TMemoryStream;
	   Image1->Picture->SaveToStream(str);
	   food.setPicture(str);
	if(this->add)
	{
	    food.InsertDBFood();
	}
	else
	{
		food.setIdFood(StrToInt(EditID->Text));
		food.UpdateDBFood();
		food.UpdateFotoDBFood();
	}
	DM->OpenDB();
    FEditFood->Hide();
	}
	catch(...){
        MessageBox(NULL, L"�� ���� ������� ����!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::EditImageClick(TObject *Sender)
{
    if(OPD->Execute())Image1->Picture->LoadFromFile(OPD->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::FormShow(TObject *Sender)
{
	add = true;
	CB_id_category->Clear();
	CB_name_category->Clear();
	CB_unit->ItemIndex = 0;
	EditID->Clear();
	Edit_cost_price->Text = 0;
	Edit_mark_up->Text = 0;
	Edit_price->Text = 0;
	Edit_name_food->Clear();
	Edit_weight->Text = 0;
    CBvisible->Checked = true;
	Image1->Picture->Graphic = new Graphics::TBitmap;
	DM->ATCategory->First();
	for (int i = 0; i < DM->ATCategory->RecordCount; i++) {
	  CB_id_category->Items->Add(DM->ATCategory->FieldByName("id_category")->AsString);
	  CB_name_category->Items->Add(DM->ATCategory->FieldByName("name_category")->AsString);
	  DM->ATCategory->Next();
	}
    CB_id_category->ItemIndex = 0;

}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::EditIDChange(TObject *Sender)
{
 if (EditID->Text.IsEmpty()) {
	TabIngredient->TabVisible = false;
 }  else {
	TabIngredient->TabVisible = true;
 }

}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::CB_id_categoryChange(TObject *Sender)
{
    CB_name_category->ItemIndex = CB_id_category->ItemIndex;
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::CB_name_categoryChange(TObject *Sender)
{
	CB_id_category->ItemIndex = CB_name_category->ItemIndex;
}
//---------------------------------------------------------------------------


void TFEditFood::CalculationPrice(){
  if (!Edit_cost_price->Text.IsEmpty() && !Edit_mark_up->Text.IsEmpty()) {
	  float price = StrToFloat(Edit_cost_price->Text), mark =StrToFloat(Edit_mark_up->Text);
      Edit_price->Text = price + (price *(mark/100));
  } else Edit_price->Text = 0;
}
void __fastcall TFEditFood::Edit_cost_priceChange(TObject *Sender)
{
 	CalculationPrice();
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::Edit_mark_upChange(TObject *Sender)
{
    CalculationPrice();
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::ToolAddClick(TObject *Sender)
{
    FEditIngredient->Show();
}
//---------------------------------------------------------------------------



void __fastcall TFEditFood::ToolDeleteClick(TObject *Sender)
{
   try {
		if (IDYES == MessageBox(NULL, L"�� ��������, �� ������ �������� ?", L"ϳ����������!",  MB_YESNO |MB_ICONQUESTION))
		{
				TIngredient ingredient;
				ingredient.setId_ingredient(DM->ATFoodIngredient->FieldByName("id_listingrfood")->AsInteger);
				ingredient.DeleteDBIngredient();
				DM->RefreshADO(DM->ATFoodIngredient);
		}
	}
	catch(...){
		MessageBox(NULL, L"����, ���'������ � ����� �����������. �� ������� ��������!", L"³�����!",  MB_OK |MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::ButtonCalculationPriceClick(TObject *Sender)
{
	float price = 0;
	DM->ATFoodIngredient->First();
	for (int i = 0; i < DM->ATFoodIngredient->RecordCount ; i++) {
	 float prc = DM->ATFoodIngredient->FieldByName("price")->AsFloat;
	 float cnt = DM->ATFoodIngredient->FieldByName("counts")->AsFloat;
	 price += prc * cnt;
	 DM->ATFoodIngredient->Next();
	}
	ShowMessage("���������� - "+FloatToStrF(price,ffFixed,10,2)+" ���");
	Edit_cost_price->Text = FloatToStrF((price*100)/100,ffFixed,10,2);

}
//---------------------------------------------------------------------------


void __fastcall TFEditFood::ButtonCalculationWeightClick(TObject *Sender)
{
	float weight = 0;
	DM->ATFoodIngredient->First();
	for (int i = 0; i < DM->ATFoodIngredient->RecordCount ; i++) {
	 if(DM->ATFoodIngredient->FieldByName("unit")->AsString != "��."){
	 float prc = DM->ATFoodIngredient->FieldByName("counts")->AsFloat;
	 weight += prc;                   }
	 DM->ATFoodIngredient->Next();
	}
	ShowMessage("��������� ���� - "+FloatToStrF(weight,ffFixed,10,3)+" ��(�). \n����������!!! ����� �� �����������!");
	Edit_weight->Text = FloatToStrF(weight,ffFixed,10,3);
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::Edit_weightKeyPress(TObject *Sender, System::WideChar &Key)

{
if( Key == VK_BACK || (Key == ',')) return;
if( (Key < L'0') || (Key > L'9') ) Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::Edit_cost_priceKeyPress(TObject *Sender, System::WideChar &Key)

{
if( Key == VK_BACK || (Key == ',')) return;
if( (Key < L'0') || (Key > L'9') ) Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::Edit_mark_upKeyPress(TObject *Sender, System::WideChar &Key)

{
if( Key == VK_BACK) return;
if( (Key < L'0') || (Key > L'9') ) Key = 0;
}
//---------------------------------------------------------------------------


void __fastcall TFEditFood::Edit_priceKeyPress(TObject *Sender, System::WideChar &Key)

{
if( Key == VK_BACK || (Key == ',')) return;
if( (Key < L'0') || (Key > L'9') ) Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFEditFood::ButtonCancelClick(TObject *Sender)
{
    FEditFood->Hide();
}
//---------------------------------------------------------------------------

