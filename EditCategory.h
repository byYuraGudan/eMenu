//---------------------------------------------------------------------------

#ifndef EditCategoryH
#define EditCategoryH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFEditCategory : public TForm
{
__published:	// IDE-managed Components
	TButton *ButtonAcccept;
	TButton *ButtonCancel;
	TLabeledEdit *edit_name_category;
	TLabeledEdit *EditID;
	void __fastcall ButtonAccceptClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ButtonCancelClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFEditCategory(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditCategory *FEditCategory;
//---------------------------------------------------------------------------
#endif
