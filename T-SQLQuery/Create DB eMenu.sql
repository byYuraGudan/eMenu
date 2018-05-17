CREATE DATABASE eMenu
GO
USE eMenu
GO

CREATE TABLE Personal(id_personal INT PRIMARY KEY IDENTITY(1,1),
					  pib_personal VARCHAR(50) NOT NULL,
					  logins VARCHAR(15),
					  passwords VARCHAR(15),
					  access BIT DEFAULT 1)
GO
CREATE TABLE OrderMenu(id_order INT PRIMARY KEY IDENTITY(1,1),
					   date_open_order DATETIME DEFAULT GETDATE(),
					   date_close_order DATETIME,
					   kod_table INT NOT NULL,
					   close_order BIT DEFAULT 0,
					   payment FLOAT DEFAULT 0,
					   kod_personal INT NOT NULL,
					   kod_discount INT NOT NULL)
GO
CREATE TABLE Discounts(id_discount INT PRIMARY KEY,
					  pib_client VARCHAR(50),
					  discount FLOAT NOT NULL DEFAULT 0)
GO
CREATE TABLE ListTable(id_table INT PRIMARY KEY IDENTITY(1,1),
					   name_table VARCHAR(10) NOT NULL,
					   occupation BIT DEFAULT 1)
GO
CREATE TABLE ListOrderMenu(kod_order INT NOT NULL,
						   kod_food INT NOT NULL,
						   counts FLOAT DEFAULT 1)
GO
CREATE TABLE Category(id_category INT PRIMARY KEY IDENTITY(1,1),
					  name_category VARCHAR(100))
GO
CREATE TABLE Food(id_food INT PRIMARY KEY IDENTITY(1,1),
				  name_food VARCHAR(50),
				  picture VARBINARY(MAX),
				  kod_category INT,
				  weight_food FLOAT,
				  cost_price_food FLOAT,
				  mark_up FLOAT NOT NULL DEFAULT 0.1,
				  price_food FLOAT,
				  data_food VARCHAR(MAX))
GO
CREATE TABLE ListIngredientFood(kod_food INT NOT NULL,
								kod_ingredient INT NOT NULL,
								counts FLOAT NOT NULL)

CREATE TABLE Ingredient(id_ingredient INT PRIMARY KEY,
						name_ingredient VARCHAR(50),
						unit VARCHAR(10),
						price FLOAT NOT NULL)
GO
ALTER TABLE OrderMenu
ADD CONSTRAINT FK_OrderMenu_Personal FOREIGN KEY(kod_personal) 
	REFERENCES Personal (id_personal),
	CONSTRAINT FK_OrderMenu_ListTable FOREIGN KEY(kod_table)
	REFERENCES ListTable (id_table),
	CONSTRAINT FK_OrderMenu_Discounts FOREIGN KEY(kod_discount)
	REFERENCES Discounts(id_discount)
GO
ALTER TABLE ListOrderMenu
ADD CONSTRAINT FK_ListOrderMenu_OrderMenu FOREIGN KEY (kod_order)
	REFERENCES OrderMenu(id_order),
	CONSTRAINT FK_ListOrderMenu_Food FOREIGN KEY (kod_food)
	REFERENCES Food(id_food)
GO
ALTER TABLE Food 
ADD CONSTRAINT FK_Food_Category FOREIGN KEY (kod_category)
	REFERENCES Category(id_category)
GO
ALTER TABLE ListIngredientFood
ADD CONSTRAINT FK_ListIngredientFood_Food FOREIGN KEY (kod_food)
	REFERENCES Food (id_food),
	CONSTRAINT FK_ListIngredientFood_Ingredient FOREIGN KEY (kod_ingredient)
	REFERENCES Ingredient(id_ingredient)
GO



						


				   						   


							
						   


