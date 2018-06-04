//---------------------------------------------------------------------------

#ifndef AuthorizationH
#define AuthorizationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TFAuth : public TForm
{
__published:	// IDE-managed Components
	TButton *buttonOpen;
	TButton *buttonClose;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Login;
	TEdit *Password;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall buttonOpenClick(TObject *Sender);
	void __fastcall LoginKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall PasswordKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall buttonCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFAuth(TComponent* Owner);
	void AdminStatus(TObject *Sender);
	void UserStatus(TObject *Sender);
	void NotUserStatus(TObject *Sender);
	void LockedUser(String);
	int trycount;
};
//---------------------------------------------------------------------------
extern PACKAGE TFAuth *FAuth;
//---------------------------------------------------------------------------
#endif
