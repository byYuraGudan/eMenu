//---------------------------------------------------------------------------


#pragma hdrstop

#include "DataModuleMainForm.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDMMain *DMMain;
//---------------------------------------------------------------------------
__fastcall TDMMain::TDMMain(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------

