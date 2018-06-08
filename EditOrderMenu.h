//---------------------------------------------------------------------------

#ifndef EditOrderMenuH
#define EditOrderMenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
//---------------------------------------------------------------------------
class TFEditOrderMenu : public TForm
{
__published:	// IDE-managed Components
	TPanel *PanelOrderMenu;
	TComboBox *CB_id_order;
	TButton *Button1;
	TLabel *Label1;
	TDBGrid *DBGrid1;
	TPanel *Panel1;
	TButton *Button6;
	TGridPanel *GridPanel1;
	TButton *Button7;
	TButton *Button8;
	TButton *Button2;
	TButton *btnDiscount;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkListControlToField *LinkListControlToField1;
	TComboBox *ComboBox2;
	TLabel *Label2;
	TBindSourceDB *BindSourceDB2;
	TLinkListControlToField *LinkListControlToField2;
	TButton *btnReportDay;
	TGroupBox *GroupBox1;
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall CB_id_orderChange(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFEditOrderMenu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditOrderMenu *FEditOrderMenu;
//---------------------------------------------------------------------------
#endif
