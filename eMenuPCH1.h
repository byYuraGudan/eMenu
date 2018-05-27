#include <vcl.h>
#include <tchar.h>


class TPersonal
{
private:
	int id_personal;
	AnsiString login,password,pib_personal;
	bool access;

protected:

public:
    TPersonaL();
	void setId_personal(int);
	void setLogin(AnsiString);
	void setPassword(AnsiString);
	void setPib_personal(AnsiString);
	void setAccess(bool);
	void setInformationPersonal(int,AnsiString,AnsiString,AnsiString,bool);
	int getId_personal();
	AnsiString getLogin();
	AnsiString getPassword();
	AnsiString getPib_personal();
	bool getAccess();
    virtual const void InsertDB();
};

class TListTable
{
private:
	 int id_table;
	 bool occupation;

protected:

public:
	void setId_table(int);
	void setOccupation(bool);
	int getId_table();
	bool getOccupation(bool);
};

class TDiscount
{
private:
	int id_discount;
	float discount;
	String pib_client,adress,telefon,birthday;
protected:

public:
	TDiscount(){
		this->id_discount = 0;
		this->discount = 0;
		this->pib_client = "ϲ� �볺���";
		this->adress = "����� �볺���";
		this->telefon = "�������� �������";
		this->birthday = "1970-01-01";
	}
	void setId_discount(int);
	void setInfoDiscount(float,String,String,String,String);
	int getId_discount();
	void InsertDBDiscount();
	void UpdateDBDiscount();
    void DeleteDBDiscount();
};

class TOrderMenu : public TPersonal,public TListTable
{
private:
	int id_ordermenu;
	TDateTime date_open_order,date_close_order;
	bool order_proccesing;
	float payment;

protected:

public:
	TOrderMenu();
	virtual const void InsertDB();
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
	AnsiString name_food,data_food;
	float weight_food,cost_price_food,mark_up,price_food;

protected:

public:

};

class TIngredient
{
private:
	int id_ingredient,id_food;
	AnsiString name_ingredient,unit;
	float price,count_unit;

protected:

public:

};
