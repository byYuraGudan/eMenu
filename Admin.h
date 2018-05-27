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
	TToolButton *AddCategory;
	TToolButton *DeleteCategory;
	TToolButton *EditCategory;
	TToolBar *ToolBarDiscount;
	TToolButton *AddDiscount;
	TToolButton *DeleteDiscount;
	TToolButton *EditDiscount;
	TToolBar *ToolBar2;
	TToolButton *AddFood;
	TToolButton *DeleteFood;
	TToolButton *EditFood;
	TToolBar *ToolBar3;
	TToolButton *AddOrderMenu;
	TToolButton *DeleteOrderMenu;
	TToolButton *EditOrderMenu;
	TCategoryPanel *CPStatistic;
	TPanel *PanelPersonal;
	TEdit *EditSearchPersonal;
	TDBGrid *DBGridPersonal;
	TToolBar *ToolBar4;
	TToolButton *AddPersona;
	TToolButton *DeletePersonal;
	TToolButton *EditPersonal;
	void __fastcall buttonViewPersonalClick(TObject *Sender);
	void __fastcall buttonAddPersonalClick(TObject *Sender);
	void __fastcall buttonAddCategoryClick(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall buttonViewCategoryClick(TObject *Sender);
	void __fastcall buttonViewFoodClick(TObject *Sender);
	void __fastcall buttonViewOrderMenuClick(TObject *Sender);
	void __fastcall buttonViewDiscountClick(TObject *Sender);
	void __fastcall DeleteCategoryClick(TObject *Sender);
	void __fastcall AddCategoryClick(TObject *Sender);
	void __fastcall EditCategoryClick(TObject *Sender);
	void __fastcall EditSearchCategoryChange(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall AddDiscountClick(TObject *Sender);
	void __fastcall EditDiscountClick(TObject *Sender);
	void __fastcall DeleteDiscountClick(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFAdmin(TComponent* Owner);
    void HidePanel(TObject *Sender);

};
//---------------------------------------------------------------------------
extern PACKAGE TFAdmin *FAdmin;
//---------------------------------------------------------------------------
#endif
