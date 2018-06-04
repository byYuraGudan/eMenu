//---------------------------------------------------------------------------

#ifndef EditIngredientH
#define EditIngredientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFEditIngredient : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *Edit_name_ingredient;
	TLabeledEdit *Edit_count;
	TLabeledEdit *Edit_price;
	TButton *ButtonAcccept;
	TButton *ButtonCancel;
	TComboBox *CB_unit;
	TLabel *Label1;
	void __fastcall ButtonAccceptClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ButtonCancelClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFEditIngredient(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditIngredient *FEditIngredient;
//---------------------------------------------------------------------------
#endif
