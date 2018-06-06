//---------------------------------------------------------------------------

#ifndef OficiantH
#define OficiantH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFOficiant : public TForm
{
__published:	// IDE-managed Components
	TPanel *PanelOrderMenu;
	TComboBox *ComboBox1;
	TPanel *Panel1;
	TButton *Button2;
	TButton *Button1;
	TLabel *Label1;
	TDBGrid *DBGrid1;
	TButton *Видалити;
private:	// User declarations
public:		// User declarations
	__fastcall TFOficiant(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFOficiant *FOficiant;
//---------------------------------------------------------------------------
#endif
