USE eMenu;
GO
INSERT INTO Personal(pib_personal,logins,passwords,access)
VALUES('Administrator','admin','admin',1),('Oficiant','oficiant','1',0)
GO
INSERT INTO Discounts(id_discount,pib_client)
VALUES(0,'Default')
GO
INSERT INTO Category(name_category)
VALUES('Napoi'),('Salatu')
GO
INSERT INTO ListTable(name_table,occupation)
VALUES('1',0),('2',1)
GO
INSERT INTO Food(name_food,cost_price_food,mark_up,price_food,kod_category,weight_food)
VALUES('Coca-Cola',10,0.1,11,1,0),('Salat',20,0.2,24,2,0)
GO
INSERT INTO OrderMenu(kod_personal,kod_table,date_open_order,close_order,kod_discount)
VALUES(1,1,GetDate(),1,123),(2,2,GetDate(),0,123)
GO
INSERT INTO ListOrderMenu(kod_order,counts,kod_food)
VALUES(1,2,1),(1,1,2),(2,10,1)
