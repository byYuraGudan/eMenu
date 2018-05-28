//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditPersonal.h"
#include "DataModule.h"
#include "Admin.h"
#include "Authorization.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditFood.h"
#include "EditIngredient.h"
#include "eMenuPCH1.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFEditPersonal *FEditPersonal;
//---------------------------------------------------------------------------
__fastcall TFEditPersonal::TFEditPersonal(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------





void __fastcall TFEditPersonal::ButtonCancelClick(TObject *Sender)
{
    Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFEditPersonal::FormShow(TObject *Sender)
{
	this->add = true;
	EditID->Clear();
	date_birthday->Date = StrToDate("01.01.1970");
	edit_date_release->Text = "";
	date_work->Date = Date();
	edit_telefon->Clear();
	edit_pib_personal->Clear();
	edit_login->Clear();
	edit_adress->Clear();
	edit_password->Clear();
	PersonalAccess->Checked = false;
	PersonalActivity->Checked = true;
	ButtonRelease->Hide();
	edit_date_release->Hide();
    Label3->Hide();
}
//---------------------------------------------------------------------------

void TPersonal::setId_personal(int a){
	this->id_personal = a;
}

void TPersonal::setAccess(bool a){
	this->access = a;
}
void TPersonal::setActivity(bool a){
	this->activity = a;
}
void TPersonal::setLoginPassword(AnsiString log,AnsiString pass){
	this->login = log;
    this->password = pass;
}
void TPersonal::setInformationPersonal(AnsiString pib,AnsiString tel,AnsiString adr,TDateTime dat){
	 this->pib_personal = pib;
	 this->telefon = tel;
	 this->adress = adr;
	 this->birthday = dat;
}
void TPersonal::setDateWork(TDateTime a){
	this->date_work = a;
}
void TPersonal::setDateRelease(AnsiString a){
	this->date_release = a;
}
AnsiString TPersonal::getLogin(){
	return this->login;
}
AnsiString TPersonal::getPassword(){
	return this->password;
}
bool TPersonal::getAccess(){
	return this->access;
}
bool TPersonal::getActivity(){
	return this->activity;
}

void TPersonal::InsertDBPersonal(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("INSERT INTO eMenu.dbo.Personal(logins,passwords,access,activity,pib_personal,telefon,adress,birthday,data_of_work)");
	DM->TSQL->SQL->Add("VALUES(:log,:pass,:acs,:act,:pib,:tel,:adr,:birt,:datework)");
	DM->TSQL->Parameters->ParamByName("log")->Value = this->login;
	DM->TSQL->Parameters->ParamByName("pass")->Value =  this->password;
	DM->TSQL->Parameters->ParamByName("acs")->Value =  this->access;
	DM->TSQL->Parameters->ParamByName("act")->Value =  this->activity;
	DM->TSQL->Parameters->ParamByName("pib")->Value = this->pib_personal;
	DM->TSQL->Parameters->ParamByName("tel")->Value = this->telefon;
	DM->TSQL->Parameters->ParamByName("adr")->Value = this->adress;
	DM->TSQL->Parameters->ParamByName("birt")->Value = this->birthday;
	DM->TSQL->Parameters->ParamByName("datework")->Value = this->date_work;
	DM->TSQL->ExecSQL();
}

void TPersonal::UpdateDBPersonal(){
	DM->TSQL->SQL->Clear();
	DM->TSQL->SQL->Add("UPDATE eMenu.dbo.Personal SET \
	logins = :log,passwords = :pass,access = :acs,activity = :act,\
	pib_personal = :pib,telefon = :tel,adress = :adr,birthday = :birt,\
	data_of_work = :datework");
	DM->TSQL->SQL->Add("WHERE id_personal = :id");
	DM->TSQL->Parameters->ParamByName("id")->Value = this->id_personal;
	DM->TSQL->Parameters->ParamByName("log")->Value = this->login;
	DM->TSQL->Parameters->ParamByName("pass")->Value =  this->password;
	DM->TSQL->Parameters->ParamByName("acs")->Value =  this->access;
	DM->TSQL->Parameters->ParamByName("act")->Value =  this->activity;
	DM->TSQL->Parameters->ParamByName("pib")->Value = this->pib_personal;
	DM->TSQL->Parameters->ParamByName("tel")->Value = this->telefon;
	DM->TSQL->Parameters->ParamByName("adr")->Value = this->adress;
	DM->TSQL->Parameters->ParamByName("birt")->Value = this->birthday;
	DM->TSQL->Parameters->ParamByName("datework")->Value = this->date_work;
	//DM->TSQL->Parameters->ParamByName("daterelease")->Value = this->date_release;
	DM->TSQL->ExecSQL();
}
void TPersonal::DeleteDBPersonal(){

}

void TPersonal::UpdateDBPersonalRelease(){
	try{
		DM->TSQL->SQL->Clear();
		DM->TSQL->SQL->Add("UPDATE eMenu.dbo.Personal SET release_date = :data");
		DM->TSQL->SQL->Add("WHERE id_personal = :id");
		DM->TSQL->Parameters->ParamByName("id")->Value = this->id_personal;
		DM->TSQL->Parameters->ParamByName("data")->Value = StrToDate(this->date_release);
		DM->TSQL->ExecSQL();
		DM->OpenDB();
		}
	catch(...){
		ShowMessage("���������� ����!");
	}
}
void __fastcall TFEditPersonal::ButtonAcceptClick(TObject *Sender)
{
	TPersonal personal;
	personal.setLoginPassword(edit_login->Text,\
							  edit_password->Text);
	personal.setInformationPersonal(edit_pib_personal->Text,\
									edit_telefon->Text,\
									edit_adress->Text,\
									date_birthday->Date);
	personal.setAccess(PersonalAccess->Checked);
	personal.setActivity(PersonalActivity->Checked);
	personal.setDateWork(date_work->Date);
	personal.setDateRelease(edit_date_release->Text);
	if(add){
	   personal.InsertDBPersonal();
	} else {
	   personal.setId_personal(StrToInt(EditID->Text));
	   personal.UpdateDBPersonal();
	}
	DM->OpenDB();
}
//---------------------------------------------------------------------------

void __fastcall TFEditPersonal::ButtonReleaseClick(TObject *Sender)
{
	TPersonal personal;
	personal.setId_personal(StrToInt(EditID->Text));
	personal.setDateRelease(edit_date_release->Text);
    personal.UpdateDBPersonalRelease();
}
//---------------------------------------------------------------------------

