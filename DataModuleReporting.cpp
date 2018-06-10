//---------------------------------------------------------------------------


#pragma hdrstop

#include "DataModuleReporting.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDMReporting *DMReporting;
//---------------------------------------------------------------------------
__fastcall TDMReporting::TDMReporting(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
