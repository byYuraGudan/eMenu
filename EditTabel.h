//---------------------------------------------------------------------------

#ifndef EditTabelH
#define EditTabelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFEditTable : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *Edit_table;
	TButton *ButtonAcccept;
	TButton *ButtonCancel;
	void __fastcall ButtonCancelClick(TObject *Sender);
	void __fastcall ButtonAccceptClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFEditTable(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditTable *FEditTable;
//---------------------------------------------------------------------------
#endif
