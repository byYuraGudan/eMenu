//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Authorization.h"
#include "Admin.h"
#include "DataModule.h"
#include "DataModuleMainForm.h"
#include "eMenuPCH1.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAuth *FAuth;
//---------------------------------------------------------------------------
__fastcall TFAuth::TFAuth(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
