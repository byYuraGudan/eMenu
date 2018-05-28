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
	TIntegerField *ATFoodid_category;
	TStringField *ATFoodname_category;
	TDataSource *ADSDiscounts;
	TADOTable *ATDiscount;
	TMainMenu *MMain;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N6;
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
	void __fastcall N3Click(TObject *Sender);
	void __fastcall DataModuleDestroy(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
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
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;
//---------------------------------------------------------------------------
#endif
