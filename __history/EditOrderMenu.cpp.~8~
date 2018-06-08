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
	DM->TSQL->SQL->Add("INSERT INTO eMenu.dbo.OrderMenu(kod_t ble,kod_personal,kod_discount)");
	DM->TSQL->SQL->Add("VALUES(:t,:p,:d)");
	DM->TSQL->Parameters->ParamByName("t")->Value =  2;//this->getId_table();
	DM->TSQL->Parameters->ParamByName("p")->Value =  2;//this->getId_personal();
	DM->TSQL->Parameters->ParamByName("d")->Value =  1234;//this->getId_discount();
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





void __fastcall TFEditOrderMenu::Button6Click(TObject *Sender)
{
   ShowMessage(ComboBox1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TFEditOrderMenu::Button1Click(TObject *Sender)
{
	TOrderMenu order;
	order.InsertDBOrderMenu();
	DM->OpenDBOficiant();
}
//---------------------------------------------------------------------------

