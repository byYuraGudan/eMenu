//---------------------------------------------------------------------------

#ifndef EditPersonalH
#define EditPersonalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TFEditPersonal : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *edit_pib_personal;
	TButton *ButtonAccept;
	TButton *ButtonCancel;
	TLabeledEdit *EditID;
	TCheckBox *PersonalAccess;
	TLabeledEdit *edit_login;
	TLabeledEdit *edit_password;
	TMaskEdit *edit_date_release;
	TCheckBox *PersonalActivity;
	TLabel *Label1;
	TLabeledEdit *edit_telefon;
	TLabel *Label2;
	TLabel *Label3;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TDateTimePicker *date_birthday;
	TDateTimePicker *date_work;
	TLabeledEdit *edit_adress;
	TButton *ButtonRelease;
	void __fastcall ButtonCancelClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ButtonAcceptClick(TObject *Sender);
	void __fastcall ButtonReleaseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFEditPersonal(TComponent* Owner);
    bool add;
};
//---------------------------------------------------------------------------
extern PACKAGE TFEditPersonal *FEditPersonal;
//---------------------------------------------------------------------------
#endif
