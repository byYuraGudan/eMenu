//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Authorization.h"
#include "Admin.h"
#include "DataModule.h"

#include "eMenuPCH1.h"
#include "MainForm.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditFood.h"
#include "EditIngredient.h"
#include "EditPersonal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAuth *FAuth;
//---------------------------------------------------------------------------
__fastcall TFAuth::TFAuth(TComponent* Owner)
	: TForm(Owner)
{
	DM->admin = false;
	DM->auth = false;
	this->trycount = 0;
}
//---------------------------------------------------------------------------

void TFAuth::AdminStatus(TObject *Sender){
	DM->admin = true;
	FMainForm->Menu = DM->MAdmin;
	FMainForm->AddToOrder->Height = 20;
}

void TFAuth::UserStatus(TObject *Sender){
	DM->admin = false;
	FMainForm->Menu = DM->MUser;
	FMainForm->AddToOrder->Height = 20;
}

void TFAuth::NotUserStatus(TObject *Sender){
	FAdmin->Hide();
	FEditCategory->Hide();
	FEditDiscount->Hide();
	FEditFood->Hide();
	FEditIngredient->Hide();
	FEditPersonal->Hide();
	FMainForm->Menu = DM->MMain;
	FMainForm->AddToOrder->Height = 0;
}

void __fastcall TFAuth::FormShow(TObject *Sender)
{
	Login->SetFocus();
	Login->Clear();
    Password->Clear();
	NotUserStatus(Sender);
    this->trycount = 0;
}void TFAuth::LockedUser(String log){	if (this->trycount > 3) {	DM->TSQL->SQL->Clear();	DM->TSQL->SQL->Add("UPDATE eMenu.dbo.Personal Set activity = 0 where logins = :log and id_personal <> 1");	DM->TSQL->Parameters->ParamByName("log")->Value = log;	DM->TSQL->ExecSQL();    DM->OpenDB();	MessageBox(NULL, L"Ваш акаунт був заблокований!", L"Блокування!",  MB_OK |MB_ICONERROR);    this->trycount = 0;	}}//---------------------------------------------------------------------------

void __fastcall TFAuth::buttonOpenClick(TObject *Sender)
{
	String login = Login->Text, password = Password->Text;
	DM->DoSQL(DM->TSQL,"Select * FROM eMenu.dbo.Personal WHERE logins = "+QuotedStr(login)+" and passwords = "+QuotedStr(password));
	if (DM->TSQL->RecordCount !=0) {
		DM->auth = true;
	   if(DM->TSQL->FieldByName("activity")->AsBoolean){
			if (DM->TSQL->FieldByName("access")->AsBoolean)  this->AdminStatus(Sender);
			else this->UserStatus(Sender);
            FAuth->Hide();
	   }
	   else MessageBox(NULL, L"Користувач заблокований!", L"Відмова!",  MB_OK |MB_ICONWARNING);
	}
	else {
		MessageBox(NULL, L"Неправильний логін або пароль!", L"Відмова!",  MB_OK |MB_ICONERROR);
		this->trycount++;
        this->LockedUser(login);
	}
    DM->RefreshADO(DM->MTShowFood);
}
//---------------------------------------------------------------------------

void __fastcall TFAuth::LoginKeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key == 13) Password->SetFocus();
}
//---------------------------------------------------------------------------


void __fastcall TFAuth::PasswordKeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key == 13) buttonOpenClick(Sender);
}
//---------------------------------------------------------------------------


void __fastcall TFAuth::buttonCloseClick(TObject *Sender)
{
    FAuth->Hide();
}
//---------------------------------------------------------------------------

