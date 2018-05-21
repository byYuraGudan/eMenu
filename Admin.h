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
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFAdmin : public TForm
{
__published:	// IDE-managed Components
	TCategoryPanelGroup *AdminPanelGroupButton;
	TCategoryPanel *CPOrderMenu;
	TCategoryPanel *CPCategory;
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
	TPanel *PanelPersonal;
	TEdit *EditSearchPersonal;
	TDBGrid *DBGridPersonal;
	TPanel *PanelCategory;
	TEdit *EditSearchCategory;
	TDBGrid *DBGridCategory;
	TPanel *PanelFood;
	TEdit *EditSearchFood;
	TDBGrid *DBGridIngredient;
	TDBGrid *DBGridFood;
	TPanel *PanelOrderMenu;
	TPanel *PanelDiscount;
	TEdit *EditSearchDiscount;
	TEdit *EditSearchOrderMenu;
	TDBGrid *DBGridListOrder;
	TDBGrid *DBGridOrderMenu;
	TDBGrid *DBGridDiscount;
	TToolBar *ToolBar;
	TToolButton *Add;
	TToolButton *Delete;
	TToolButton *Edit;
	TToolBar *ToolBar1;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolBar *ToolBar2;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TToolButton *ToolButton6;
	TToolBar *ToolBar3;
	TToolButton *ToolButton7;
	TToolButton *ToolButton8;
	TToolButton *ToolButton9;
	TToolBar *ToolBar4;
	TToolButton *ToolButton10;
	TToolButton *ToolButton11;
	TToolButton *ToolButton12;
	void __fastcall buttonViewPersonalClick(TObject *Sender);
	void __fastcall buttonAddPersonalClick(TObject *Sender);
	void __fastcall buttonAddCategoryClick(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall buttonViewCategoryClick(TObject *Sender);
	void __fastcall buttonViewFoodClick(TObject *Sender);
	void __fastcall buttonViewOrderMenuClick(TObject *Sender);
	void __fastcall buttonViewDiscountClick(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFAdmin(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TFAdmin *FAdmin;
//---------------------------------------------------------------------------
#endif
