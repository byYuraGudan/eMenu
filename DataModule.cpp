//---------------------------------------------------------------------------


#pragma hdrstop

#include "DataModule.h"
#include "Admin.h"
#include "eMenuPCH1.h"
#include "MainForm.h"
#include "Authorization.h"
#include "EditCategory.h"
#include "EditDiscount.h"
#include "EditFood.h"
#include "EditIngredient.h"
#include "EditPersonal.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDM *DM;
//---------------------------------------------------------------------------
__fastcall TDM::TDM(TComponent* Owner)
	: TDataModule(Owner)
{
	 this->ini = new TIniFile(GetCurrentDir()+"\\options.ini");
	 try {
			ConnectionToDB->Connected = false;
			ConnectionToDB->ConnectionString = ini->ReadString("SQL Server","ConnectionString","ConnectionString=Provider=SQLOLEDB.1;Password=1;Persist Security Info=True;User ID=sa;Initial Catalog=eMenu;Data Source=127.0.0.1;Use Procedure for Prepare=1;Auto Translate=True;Packet Size=4096;Workstation ID=YURAHUDAN-��;Use Encryption for Data=False;Tag with column collation when possible=False");
			ConnectionToDB->Connected = true;
			OpenDB();
		}
		catch(...) {
			ShowMessage("�� ������� ���������� �� ��!");
		}
}

void TDM::DoSQL(TADOQuery *Query,AnsiString str){
	Query->Close();
	Query->SQL->Clear();
	Query->SQL->Add(str);
	Query->ExecSQL();
	Query->Open();
}
void TDM::DoSQLExec(TADOQuery *Query,AnsiString str){
	Query->Close();
	Query->SQL->Clear();
	Query->SQL->Add(str);
	Query->ExecSQL();
}
void TDM::RefreshADO(TADOTable *Table){
	Table->Close();
	Table->Open();
}
void TDM::RefreshADO(TADOQuery *Query){
	Query->Close();
	Query->Open();
}

void TDM::OpenDB(){
	RefreshADO(MTShowCategory);
	RefreshADO(MTShowFood);
	RefreshADO(ATPersonal);
	RefreshADO(ATCategory);
	RefreshADO(ATFood);
	RefreshADO(ATDiscount);
	RefreshADO(ATFoodIngredient);
    RefreshADO(ATListTable);
}
//---------------------------------------------------------------------------

void __fastcall TDM::N3Click(TObject *Sender)
{
FAdmin->Close();
}
//---------------------------------------------------------------------------


void __fastcall TDM::DataModuleDestroy(TObject *Sender)
{
		ini->WriteString("SQL Server","ConnectionString",ConnectionToDB->ConnectionString);
}
//---------------------------------------------------------------------------









void __fastcall TDM::N2Click(TObject *Sender)
{
    DM->OpenDB();
}
//---------------------------------------------------------------------------

void __fastcall TDM::N4Click(TObject *Sender)
{
	FMainForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TDM::N5Click(TObject *Sender)
{
    FAuth->Show();
}
//---------------------------------------------------------------------------

void __fastcall TDM::N10Click(TObject *Sender)
{
    FMainForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TDM::N11Click(TObject *Sender)
{
    FAuth->NotUserStatus(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TDM::N12Click(TObject *Sender)
{
	if (DM->admin && DM->auth) FAdmin->Show();
}
//---------------------------------------------------------------------------


void __fastcall TDM::N15Click(TObject *Sender)
{
    FAuth->Show();
}
//---------------------------------------------------------------------------


void __fastcall TDM::N19Click(TObject *Sender)
{
    DM->OpenDB();
}
//---------------------------------------------------------------------------

void __fastcall TDM::N21Click(TObject *Sender)
{
    FAuth->NotUserStatus(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TDM::N22Click(TObject *Sender)
{
    FMainForm->Close();
}
//---------------------------------------------------------------------------



void __fastcall TDM::TimerUpdateTimer(TObject *Sender)
{
 DM->DoSQL(DM->ADOQuery1,"SELECT        OBJECT_NAME(object_id) AS DatabaseName, last_user_update FROM            sys.dm_db_index_usage_stats WHERE        (database_id = DB_ID('eMenu'))");
 DM->ADOQuery1->First();
 DM->MonitorServer->First();
 bool f = false;
 for (int i = 0; i < DM->ADOQuery1->RecordCount; i++) {
	if (DM->MonitorServer->FieldByName("last_user_update")->AsString != DM->ADOQuery1->FieldByName("last_user_update")->AsString) f = true;
	DM->ADOQuery1->Next();
	DM->MonitorServer->Next();
 }
    if(f)DM->OpenDB();
}
//---------------------------------------------------------------------------

