//---------------------------------------------------------------------------

#ifndef EditPersonalH
#define EditPersonalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFEditPersonal : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *edit_pib_personal;
	TLabeledEdit *edit_login;
	TCheckBox *PersonalAccess;
	TLabeledEdit *edit_password;
	TButton *ButtonAccept;
	TButton *ButtonCancel;
	TLabeledEdit *EditID;
private:	// User declarations
public:		// User declarations
	__fastcall TFEditPersonal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditPersonal *FEditPersonal;
//---------------------------------------------------------------------------
#endif
