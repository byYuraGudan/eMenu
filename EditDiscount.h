//---------------------------------------------------------------------------

#ifndef EditDiscountH
#define EditDiscountH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TFEditDiscount : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *edit_id;
	TLabeledEdit *edit_pib_client;
	TLabeledEdit *edit_discount;
	TButton *ButtonAccept;
	TButton *ButtonCancel;
	TLabeledEdit *edit_adress;
	TLabeledEdit *edit_telefon;
	TGroupBox *GroupBox1;
	TButton *Button1;
	TMaskEdit *edit_birthday;
	TLabel *Label1;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ButtonAcceptClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall edit_idKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall edit_discountKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall edit_discountChange(TObject *Sender);
	void __fastcall ButtonCancelClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFEditDiscount(TComponent* Owner);
    bool add;
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditDiscount *FEditDiscount;
//---------------------------------------------------------------------------
#endif
