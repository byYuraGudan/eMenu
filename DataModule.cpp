//---------------------------------------------------------------------------


#pragma hdrstop

#include "DataModule.h"
#include "Admin.h"
#include "eMenuPCH1.h"
#include "MainForm.h"

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







