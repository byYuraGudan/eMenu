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
#include <Data.DBXMySQL.hpp>
#include <Data.SqlExpr.hpp>
#include <Datasnap.DBClient.hpp>
#include <Datasnap.DSConnect.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ConnectionToDB;
	TADOTable *ATPersonal;
	TADOTable *ATCategory;
	TADOTable *ATOrderMenu;
	TADOTable *ATFood;
	TADOQuery *TSQL;
	TDataSource *ADSFood;
	TDataSource *ADSCategory;
	TDataSource *ADSPersonal;
	TDataSource *ODSOpenOrder;
	TADOTable *OTOpenOrder;
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
	TADOQuery *TSQLCheck;
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
	TIntegerField *ATFoodmark_up;
	TIntegerField *ATDiscountdiscount;
	TADOTable *ATListTable;
	TDataSource *ADSListTable;
	TAutoIncField *ATListTableid_table;
	TStringField *ATListTablename_table;
	TBooleanField *ATListTableoccupation;
	TIntegerField *ATOrderMenuid_order;
	TDateTimeField *ATOrderMenudate_open_order;
	TDateTimeField *ATOrderMenudate_close_order;
	TBooleanField *ATOrderMenuclose_order;
	TBCDField *ATOrderMenupayment;
	TIntegerField *ATOrderMenukod_table;
	TStringField *ATOrderMenuname_table;
	TIntegerField *ATOrderMenukod_personal;
	TStringField *ATOrderMenupib_personal;
	TIntegerField *ATOrderMenukod_discount;
	TStringField *ATOrderMenupib_client;
	TIntegerField *ATOrderMenudiscount;
	TDataSource *ADSOrderMenu;
	TDataSource *ADSListOrderMenu;
	TADOTable *ATListOrderMenu;
	TIntegerField *ATListOrderMenuid_listordermenu;
	TIntegerField *ATListOrderMenukod_food;
	TStringField *ATListOrderMenuname_food;
	TBCDField *ATListOrderMenucounts;
	TBCDField *ATListOrderMenuprice_food;
	TIntegerField *ATListOrderMenukod_order;
	TStringField *ATOrderMenuRealPayment;
	TADOTable *OTNotOcupTable;
	TDataSource *ODSNotOcupTable;
	TAutoIncField *OTNotOcupTableid_table;
	TStringField *OTNotOcupTablename_table;
	TBooleanField *OTNotOcupTableoccupation;
	TImageList *ImageBtn;
	TIntegerField *OTOpenOrderid_order;
	TIntegerField *OTOpenOrderkod_discount;
	TIntegerField *OTOpenOrderkod_personal;
	TIntegerField *OTOpenOrderkod_table;
	TStringField *OTOpenOrderpib_client;
	TStringField *OTOpenOrderpib_personal;
	TStringField *OTOpenOrdername_table;
	TDateTimeField *OTOpenOrderdate_open_order;
	TDateTimeField *OTOpenOrderdate_close_order;
	TBCDField *OTOpenOrderpayment;
	TIntegerField *OTOpenOrderdiscount;
	TStringField *OTOpenOrderRealPayment;
	TDataSource *ODSListOpenOrder;
	TBooleanField *ATFoodvisible;
	TfrxReport *frxScoreDiscount;
	TADOTable *OTListOpenOrder;
	TIntegerField *OTListOpenOrderid_listordermenu;
	TIntegerField *OTListOpenOrderkod_order;
	TIntegerField *OTListOpenOrderkod_food;
	TStringField *OTListOpenOrdername_food;
	TBCDField *OTListOpenOrdercounts;
	TBCDField *OTListOpenOrderprice_food;
	TFMTBCDField *OTListOpenOrderSuma;
	TADOQuery *TReportDiscount;
	TfrxReport *frxSaleIngredient;
	TfrxReport *frxScoreFood;
	TfrxReport *frxScorePersonal;
	TfrxReport *frxShowOrder;
	TfrxDBDataset *frxDBDiscount;
	TfrxDBDataset *frxDBSaleIngredient;
	TfrxDBDataset *frxDBScoreFood;
	TfrxDBDataset *frxDBScorePersonal;
	TfrxDBDataset *frxDBShowOrder;
	TDataSource *DSReport;
	TADOQuery *TReportIngredient;
	TADOQuery *TReportFood;
	TADOQuery *TReportPersonal;
	TADOQuery *TReportOrder;
	TIntegerField *TReportDiscountid_discount;
	TStringField *TReportDiscountpib_client;
	TIntegerField *TReportDiscountCountBuyOrder;
	TFMTBCDField *TReportDiscountPaymentAll;
	TStringField *TReportFoodname_food;
	TIntegerField *TReportFoodCountSale;
	TStringField *TReportIngredientname_food;
	TStringField *TReportIngredientname_ingredient;
	TFMTBCDField *TReportIngredientAsCountSaleIngredient;
	TStringField *TReportIngredientunit;
	TFMTBCDField *TReportIngredientSaleFood;
	TStringField *TReportPersonalpib_personal;
	TIntegerField *TReportPersonalCountOrder;
	TFMTBCDField *TReportPersonalPayment;
	TFMTBCDField *TReportPersonalPaymentDiscount;
	TBCDField *TReportIngredientprice;
	TAutoIncField *TReportOrderid_order;
	TDateTimeField *TReportOrderdate_open_order;
	TStringField *TReportOrderpib_personal;
	TStringField *TReportOrderpib_client;
	TBCDField *TReportOrderpayment;
	TIntegerField *TReportOrderdiscount;
	TFMTBCDField *TReportOrderPaymentDiscount;
	TfrxReport *frxCheck;
	TfrxDBDataset *frxDBCheck;
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
	void __fastcall N13Click(TObject *Sender);
	void __fastcall N17Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDM(TComponent* Owner);
	void DoSQL(TADOQuery*,AnsiString);
	void DoSQLExec(TADOQuery*,AnsiString);
	void RefreshADO(TADOTable*);
	void RefreshADO(TADOQuery*);
	void OpenDB();
	void OpenDBOficiant();
	void OpenDBMain();
    void OpenReport();
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
