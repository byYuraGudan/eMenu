#include <vcl.h>
#include <tchar.h>


class TPersonal
{
private:
	int id_personal;
	AnsiString login,password,pib_personal,telefon,adress,date_release;
	TDateTime date_work,birthday;
	bool access,activity;

protected:

public:
	TPersonaL(){
		this->id_personal = 0;
		this->login = "Логін";
		this->password = "Пароль";
		this->pib_personal = "Прізвище ініціали";
		this->telefon = "Телефон";
		this->adress = "Адрес";
		this->date_work = Date();
		this->date_release = "";
		this->birthday = StrToDate("01.01.1970");
		this->access = false;
        this->activity = true;
	}
	void setId_personal(int);
	void setAccess(bool);
	void setActivity(bool);
	void setLoginPassword(AnsiString,AnsiString);
	void setInformationPersonal(AnsiString,AnsiString,AnsiString,TDateTime);
	void setDateWork(TDateTime);
	void setDateRelease(AnsiString);
	int getId_personal();
	AnsiString getLogin();
	AnsiString getPassword();
	bool getActivity();
	bool getAccess();
	void InsertDBPersonal();
	void UpdateDBPersonal();
	void UpdateDBPersonalRelease();
    void DeleteDBPersonal();

};

class TListTable
{
private:
	 int id_table;
	 AnsiString name;
	 bool occupation;
protected:

public:
	void setId_table(int);
	int getId_table();
	void setNameListTable(AnsiString);
	void setOccupListTable(bool);
	void InsertDBListTable();
    void UpdateInverseOccupation();
	void DeleteDBListTable();
};

class TDiscount
{
private:
	int id_discount;
	float discount;
	String pib_client,adress,telefon;
	TDateTime birthday;
protected:

public:
	TDiscount(){
		this->id_discount = 0;
		this->discount = 0;
		this->pib_client = "ПІБ Клієнта";
		this->adress = "Адрес Клієнта";
		this->telefon = "Мобільний телефон";
		this->birthday = StrToDate("01.01.1970");
	}
	void setId_discount(int);
	void setInfoDiscount(float,String,String,String,TDateTime);
	int getId_discount();
	void InsertDBDiscount();
	void UpdateDBDiscount();
    void DeleteDBDiscount();
};




class TCategory
{
private:
	int id_category;
	AnsiString name_category;

protected:

public:
	TCategory(){
		this->id_category = 0;
        this->name_category = "Name_category";
	}
	void setId_category(int);
	void setName_category(AnsiString);
	int getId_category();
	AnsiString getName_category();
	void InsertDBCategory();
	void UpdateDBCategory();
    void DeleteDBCategory();
};

class TFood: public TCategory
{
private:
	int id_food;
	AnsiString name_food,data_food,unit_food;
	float weight_food,cost_price_food,mark_up,price_food;
	TMemoryStream *picture;

protected:

public:
	TFood(){
	 this->id_food = 0;
	 this->name_food = "Назва";
	 this->data_food = "Відомості";
	 this->unit_food = "Одиниція виміру";
	 this->weight_food = 0;
	 this->cost_price_food = 0;
	 this->mark_up = 0;
	 this->price_food = 0;
     this->picture = new TMemoryStream;
	}
	void setIdFood(int);
	void setWeigh_Food(float);
	void setInfoFood(AnsiString,AnsiString,AnsiString);
	void setCostFood(float,float,float);
	void setPicture(TMemoryStream*);
	int getIdFood();
	void InsertDBFood();
	void UpdateDBFood();
	void UpdateFotoDBFood();
	void DeleteDBFood();
};

class TIngredient: public TFood
{
private:
	int id_ingredient;
	AnsiString name_ingredient,unit;
	float price,count_unit;

public:
	TIngredient(){
		this->id_ingredient = 0;
		this->name_ingredient = "Назва";
		this->unit = "Од.вим.";
		this->price = 0;
        this->count_unit = 0;
	}
	void setId_ingredient(int);
	void setInfoIngredient(AnsiString,AnsiString,float,float);
	int getId_ingredient();
	void InsertDBIngredient();
	void UpdateDBIngredient();
    void DeleteDBIngredient();
};

class TOrderMenu: public TDiscount, public TPersonal,public TListTable
{
private:
	int id_order;
	TDateTime date_open_order,date_close_order;
	bool close_order;
    float payment;
public:
	TOrderMenu(){
		this->id_order = 0;
		this->date_close_order = Date();
		this->date_close_order = Date();
		this->close_order = false;
        this->payment = 0;
	}
	void setIdOrder(int);
	void setDateOrder(TDateTime,TDateTime);
	void setCloseOrder(bool);
	void setPayment(float);
    int getIdOrder();
	void InsertDBOrderMenu();
	void UpdateDBOrderMenu();
    void DeleteDBOrderMenu();
	void CloseOrderMenu();
	void UpdatePayment();
	void UpdateDiscount();
};

class TListOrder: public TFood,public TOrderMenu
{
private:
	int id_listingrfood,counts;
public:
	void setIdListingrfood(int);
	void setListCounts(int);
	int getIdListingrfood();
	void InsertDBListOrder();
    void DeleteDBListOrder();
};
