//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditTabel.h"
#include "Admin.h"
#include "Authorization.h"
#include "DataModule.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditFood.h"
#include "EditIngredient.h"
#include "EditPersonal.h"
#include "eMenuPCH1.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFEditTable *FEditTable;
//---------------------------------------------------------------------------
__fastcall TFEditTable::TFEditTable(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFEditTable::ButtonCancelClick(TObject *Sender)
{
 Hide();
}

void TListTable::setId_table(int a){ this->id_table = a;}

int TListTable::getId_table(){return this->id_table;}

void TListTable::setNameListTable(AnsiString a)	{this->name = a;}

void TListTable::setOccupListTable(bool b){  this->occupation = b;}


void TListTable::InsertDBListTable(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("INSERT INTO eMenu.dbo.ListTable(name_table)");
	DM->TSQL->SQL->Add("VALUES(:P1)");
	DM->TSQL->Parameters->ParamByName("P1")->Value = this->name;
	DM->TSQL->ExecSQL();
}
void TListTable::UpdateOccupation(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("UPDATE eMenu.dbo.ListTable SET occupation = :ocup");
	DM->TSQL->SQL->Add("WHERE id_table = :id");
	DM->TSQL->Parameters->ParamByName("id")->Value = this->id_table;
	DM->TSQL->Parameters->ParamByName("ocup")->Value = this->occupation;
	DM->TSQL->ExecSQL();
}
void TListTable::UpdateInverseOccupation(){
	DM->DoSQLExec(DM->TSQL,"Update eMenu.dbo.ListTable SET occupation =  occupation ^1 WHERE id_table ="+IntToStr(this->id_table));
}
void TListTable::DeleteDBListTable(){
	DM->DoSQLExec(DM->TSQL,"DELETE FROM eMenu.dbo.ListTable WHERE id_table ="+IntToStr(this->id_table));
}

void __fastcall TFEditTable::ButtonAccceptClick(TObject *Sender)
{
	TListTable table;
	table.setNameListTable(Edit_table->Text);
	table.InsertDBListTable();
    DM->OpenDB();
    Hide();
}
//---------------------------------------------------------------------------

