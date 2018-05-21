//---------------------------------------------------------------------------

#ifndef EditFoodH
#define EditFoodH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Touch.Keyboard.hpp>
#include <Vcl.ToolWin.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFEditFood : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabFood;
	TTabSheet *TabIngredient;
	TLabeledEdit *Edit_name_food;
	TImage *Image1;
	TComboBox *comboboxname_category;
	TComboBox *CB_id_category;
	TLabeledEdit *Edit_cost_price;
	TLabeledEdit *Edit_mark_up;
	TButton *EditImage;
	TGroupBox *GroupBox1;
	TToolBar *ToolBar1;
	TToolButton *ToolAdd;
	TToolButton *ToolDelete;
	TPanel *PanelImage;
	TLabeledEdit *EditID;
	TLabeledEdit *Edit_price;
	TLabel *Label1;
	TButton *ButtonAccept;
	TButton *ButtonCancel;
	TPanel *PanelFood;
	TLabeledEdit *Edit_weight;
	TButton *ButtonCalculation;
	TGroupBox *GroupBox2;
	TDBGrid *DBGrid1;
private:	// User declarations
public:		// User declarations
	__fastcall TFEditFood(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditFood *FEditFood;
//---------------------------------------------------------------------------
#endif
