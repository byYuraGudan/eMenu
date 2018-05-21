//---------------------------------------------------------------------------

#ifndef EditDiscountH
#define EditDiscountH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFEditDiscount : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *edit_id;
	TLabeledEdit *edit_pib_client;
	TLabeledEdit *edit_discount;
	TButton *ButtonAccept;
	TButton *ButtonCancel;
private:	// User declarations
public:		// User declarations
	__fastcall TFEditDiscount(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditDiscount *FEditDiscount;
//---------------------------------------------------------------------------
#endif
