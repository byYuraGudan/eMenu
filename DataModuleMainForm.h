//---------------------------------------------------------------------------

#ifndef DataModuleMainFormH
#define DataModuleMainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDMMain : public TDataModule
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TDMMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDMMain *DMMain;
//---------------------------------------------------------------------------
#endif
