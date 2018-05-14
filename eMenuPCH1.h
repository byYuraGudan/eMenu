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
	void setId_category(int);
	void setName_category(AnsiString);
	int getId_category(int);
    AnsiString getName_category();
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
