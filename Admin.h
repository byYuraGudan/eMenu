//---------------------------------------------------------------------------

#ifndef AdminH
#define AdminH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Tabs.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.DBChart.hpp>
#include <VCLTee.TeeData.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <Vcl.ButtonGroup.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.TabNotBk.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------
class TFAdmin : public TForm
{
__published:	// IDE-managed Components
	TCategoryPanelGroup *AdminPanelGroupButton;
	TCategoryPanel *CPOrderMenu;
	TCategoryPanel *CPCategory;
	TPanel *Panel1;
	TCategoryPanel *CPFood;
	TCategoryPanel *CPPersonal;
	TCategoryPanel *CPDiscounts;
	TButton *buttonViewPersonal;
	TButton *buttonAddPersonal;
	TButton *Button3;
	TButton *Button4;
	TButton *buttonViewCategory;
	TButton *buttonAddCategory;
	TButton *buttonViewFood;
	TButton *buttonViewOrderMenu;
	TButton *buttonViewDiscount;
	TButton *Button8;
	TButton *buttonViewListOrderMenu;
	TButton *Button2;


private:	// User declarations
public:		// User declarations
	__fastcall TFAdmin(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TFAdmin *FAdmin;
//---------------------------------------------------------------------------
#endif
