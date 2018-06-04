//---------------------------------------------------------------------------

#ifndef DataModuleH
#define DataModuleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Menus.hpp>
#include <System.ImageList.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
#include <IniFiles.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ConnectionToDB;
	TADOTable *ATPersonal;
	TADOTable *ATCategory;
	TADOTable *TableOrderMenu;
	TADOTable *ATFood;
	TADOQuery *TSQL;
	TDataSource *ADSFood;
	TDataSource *ADSCategory;
	TDataSource *ADSPersonal;
	TDataSource *DSOpenOrder;
	TADOTable *TableOpenOrder;
	TImageList *ImageListButton;
	TDataSource *MDSShowFood;
	TDataSource *MDSShowCategory;
	TADOTable *MTShowFood;
	TAutoIncField *MTShowFoodid_food;
	TStringField *MTShowFoodname_food;
	TBlobField *MTShowFoodpicture;
	TIntegerField *MTShowFoodkod_category;
	TFloatField *MTShowFoodweight_food;
	TFloatField *MTShowFoodcost_price_food;
	TFloatField *MTShowFoodmark_up;
	TFloatField *MTShowFoodprice_food;
	TMemoField *MTShowFooddata_food;
	TADOTable *MTShowCategory;
	TADOQuery *MQShowFood;
	TAutoIncField *MQShowFoodid_food;
	TStringField *MQShowFoodname_food;
	TBlobField *MQShowFoodpicture;
	TIntegerField *MQShowFoodkod_category;
	TFloatField *MQShowFoodweight_food;
	TFloatField *MQShowFoodcost_price_food;
	TFloatField *MQShowFoodmark_up;
	TFloatField *MQShowFoodprice_food;
	TMemoField *MQShowFooddata_food;
	TDataSource *MDSQShowFood;
	TAutoIncField *ATPersonalid_personal;
	TStringField *ATPersonalpib_personal;
	TStringField *ATPersonallogins;
	TStringField *ATPersonalpasswords;
	TBooleanField *ATPersonalaccess;
	TAutoIncField *ATCategoryid_category;
	TStringField *ATCategoryname_category;
	TIntegerField *ATFoodid_food;
	TStringField *ATFoodname_food;
	TBlobField *ATFoodpicture;
	TIntegerField *ATFoodkod_category;
	TFloatField *ATFoodweight_food;
	TFloatField *ATFoodcost_price_food;
	TFloatField *ATFoodmark_up;
	TFloatField *ATFoodprice_food;
	TMemoField *ATFooddata_food;
	TDataSource *ADSDiscounts;
	TADOTable *ATDiscount;
	TMainMenu *MMain;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TDateTimeField *ATPersonaldata_of_work;
	TDateTimeField *ATPersonalrelease_date;
	TIntegerField *ATDiscountid_discount;
	TStringField *ATDiscountpib_client;
	TFloatField *ATDiscountdiscount;
	TStringField *ATDiscountadress;
	TStringField *ATDiscounttelefon;
	TStringField *ATPersonaltelefon;
	TDateTimeField *ATPersonalbirthday;
	TBooleanField *ATPersonalactivity;
	TStringField *ATPersonaladress;
	TDateTimeField *ATDiscountbirthday;
	TMainMenu *MAdmin;
	TMainMenu *MUser;
	TMenuItem *N5;
	TMenuItem *N7;
	TMenuItem *N8;
	TMenuItem *N9;
	TMenuItem *N10;
	TMenuItem *N11;
	TMenuItem *N12;
	TMenuItem *N13;
	TMenuItem *N14;
	TMenuItem *N15;
	TMenuItem *N6;
	TMenuItem *N16;
	TMenuItem *N17;
	TMenuItem *N18;
	TMenuItem *N19;
	TMenuItem *N20;
	TMenuItem *N21;
	TMenuItem *N22;
	TDataSource *DataSource1;
	TADOTable *MonitorServer;
	TStringField *ATFoodunit_food;
	TIntegerField *ATFoodid_category;
	TStringField *ATFoodname_category;
	TStringField *ATFoodweight_unit;
	TStringField *MTShowFoodunit_food;
	TStringField *MTShowFoodweight_unit;
	TTimer *TimerUpdate;
	TADOQuery *ADOQuery1;
	TStringField *MQShowFoodunit_food;
	TStringField *MQShowFoodweight_unit;
	TADOTable *ATFoodIngredient;
	TDataSource *ADSFoodIngredient;
	TAutoIncField *ATFoodIngredientid_listingrfood;
	TIntegerField *ATFoodIngredientkod_food;
	TStringField *ATFoodIngredientname_ingredient;
	TFloatField *ATFoodIngredientcounts;
	TStringField *ATFoodIngredientunit;
	TFloatField *ATFoodIngredientprice;
	void __fastcall N3Click(TObject *Sender);
	void __fastcall DataModuleDestroy(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall N10Click(TObject *Sender);
	void __fastcall N11Click(TObject *Sender);
	void __fastcall N12Click(TObject *Sender);
	void __fastcall N15Click(TObject *Sender);
	void __fastcall N19Click(TObject *Sender);
	void __fastcall N21Click(TObject *Sender);
	void __fastcall N22Click(TObject *Sender);
	void __fastcall TimerUpdateTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDM(TComponent* Owner);
	void DoSQL(TADOQuery*,AnsiString);
	void RefreshADO(TADOTable*);
	void RefreshADO(TADOQuery*);
	void OpenDB();
	TIniFile *ini;
	bool auth;
	bool admin;
	int id_user;
    String pib_personal;
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;
//---------------------------------------------------------------------------
#endif
