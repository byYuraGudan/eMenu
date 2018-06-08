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
	TButton *btnCloseOrder;
	TLabel *Label1;
	TDBGrid *DBGrid1;
	TPanel *Panel1;
	TButton *btnOpenOrder;
	TGridPanel *GridPanel1;
	TButton *btnAddToOrder;
	TButton *btnRemov;
	TButton *btnPrint;
	TButton *btnDiscount;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkListControlToField *LinkListControlToField1;
	TComboBox *CB_table;
	TLabel *Label2;
	TBindSourceDB *BindSourceDB2;
	TLinkListControlToField *LinkListControlToField2;
	TButton *btnReportDay;
	TGroupBox *GroupBox1;
	TLabel *Label3;
	TDBText *DBdateopen;
	TDBText *DBidtable;
	TDBText *DBoficiant;
	TDBText *DBClient;
	TDBText *DBOrderid;
	TLabel *Label4;
	TDBText *DBdiscount;
	TDBText *DBpayment;
	TDBText *DBrealpayment;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall CB_id_orderChange(TObject *Sender);
	void __fastcall btnRemovClick(TObject *Sender);
	void __fastcall btnAddToOrderClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFEditOrderMenu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditOrderMenu *FEditOrderMenu;
//---------------------------------------------------------------------------
#endif
