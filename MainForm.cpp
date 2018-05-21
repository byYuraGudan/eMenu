//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
#include "Admin.h"
#include "DataModule.h"
#include "Authorization.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMainForm *FMainForm;
//---------------------------------------------------------------------------
__fastcall TFMainForm::TFMainForm(TComponent* Owner)
	: TForm(Owner)
{
}


//---------------------------------------------------------------------------





void __fastcall TFMainForm::FormShow(TObject *Sender)
{
	FAdmin->Show();
	FAuth->Show();

}
//---------------------------------------------------------------------------












void __fastcall TFMainForm::DBImage1Click(TObject *Sender)
{
    	ShowMessage(IntToStr(DBImage1->Width)+'-'+IntToStr(DBImage1->Height));
}
//---------------------------------------------------------------------------

void __fastcall TFMainForm::EditMainSearchFoodChange(TObject *Sender)
{
	String tmp = EditMainSearchFood->Text;
	if (tmp.Length()!=0) {
		DM->DoSQL(DM->MQShowFood,"SELECT * FROM eMenu.dbo.Food WHERE name_food like '%"+tmp+"%'");
		DBCGShowFood->DataSource = DM->MDSQShowFood;
	} else {
			DBCGShowFood->DataSource = DM->MDSShowFood;
	DM->MTShowFood->Refresh();
	DM->MQShowFood->Close();
    }

}
//---------------------------------------------------------------------------

