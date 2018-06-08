//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.WinXPanels.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <jpeg.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCGrids.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFMainForm : public TForm
{
__published:	// IDE-managed Components
	TDBCtrlGrid *DBCGShowFood;
	TPanel *Panel1;
	TPanel *PanelElementShowFood;
	TDBImage *DBImageFood;
	TDBText *DBPrice;
	TDBText *DBInformation;
	TPanel *Panel2;
	TEdit *EditMainSearchFood;
	TDBCtrlGrid *DBGridCategory;
	TDBText *DBCategory;
	TDBText *DBText3;
	TPanel *AddToOrder;
	TDBText *DBWeight;
	TPanel *Panel4;
	TImage *Image1;
	TPanel *PanelCategory;
	TPanel *PanelOrderMenu;
	TButton *ButtonViewOrder;
	TLabel *Label1;
	TPanel *Panel3;
	TLabel *Label2;
	TDBText *DBOrderid;
	TDBText *DBidtable;
	TDBText *DBdateopen;
	TDBText *DBoficiant;
	TDBText *DBClient;
	TDBText *DBcount;
	TDBText *DBpayment;
	TDBText *DBdiscount;
	TDBText *DBrealpayment;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall EditMainSearchFoodChange(TObject *Sender);
	void __fastcall AddToOrderMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall AddToOrderMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Image1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ButtonViewOrderClick(TObject *Sender);



private:	// User declarations
	bool authorization;
public:		// User declarations
	__fastcall TFMainForm(TComponent* Owner);
	void HideOficiant();
    void ShowOficiant();

};
//---------------------------------------------------------------------------
extern PACKAGE TFMainForm *FMainForm;
//---------------------------------------------------------------------------
#endif
