CREATE DATABASE eMenu
ON
PRIMARY (NAME = eMenu1,
	FILENAME = 'E:\eMenu\T-SQLQuery\eMenu_archive.mdf'),
FILEGROUP FileStreamGroup1 CONTAINS FILESTREAM( NAME = Arch3,
	FILENAME = 'E:\eMenu\T-SQLQuery\eMenu_filestream')

LOG ON ( NAME = eMenuLog,
	FILENAME = 'E:\eMenu\T-SQLQuery\eMenu_log.ldf')
GO
USE eMenu
GO

CREATE TABLE Personal(id_personal INT PRIMARY KEY IDENTITY(1,1),
					  pib_personal VARCHAR(50) NOT NULL,
					  logins VARCHAR(15) NOT NULL,
					  passwords VARCHAR(15) NOT NULL,
					  access BIT DEFAULT 0,
					  activity BIT DEFAULT 1,
					  telefon VARCHAR(15),
					  adress VARCHAR(100),
					  birthday DATETIME,
					  data_of_work DATETIME,
					  release_date DATETIME)
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
					  birthday DATETIME,
					  adress VARCHAR(100),
					  telefon VARCHAR(20), 
					  discount FLOAT NOT NULL DEFAULT 0)
GO
CREATE TABLE ListTable(id_table INT PRIMARY KEY IDENTITY(1,1),
					   name_table VARCHAR(10) NOT NULL,
					   occupation BIT DEFAULT 1)
GO
CREATE TABLE ListOrderMenu(id_listordermenu INT PRIMARY KEY IDENTITY(1,1),
						   kod_order INT NOT NULL,
						   kod_food INT NOT NULL,
						   counts FLOAT DEFAULT 1)
GO
CREATE TABLE Category(id_category INT PRIMARY KEY IDENTITY(1,1),
					  name_category VARCHAR(100))
GO
CREATE TABLE Food(id_food INT PRIMARY KEY IDENTITY(1,1),
				  name_food VARCHAR(50) NOT NULL,
				  picture VARBINARY(MAX),
				  kod_category INT,
				  weight_food FLOAT,
				  cost_price_food FLOAT NOT NULL,
				  mark_up FLOAT NOT NULL DEFAULT 0.1,
				  price_food FLOAT,
				  data_food VARCHAR(MAX))
GO
CREATE TABLE ListIngredientFood(id_listingrfood INT PRIMARY KEY IDENTITY(1,1),
								kod_food INT NOT NULL,
								kod_ingredient INT NOT NULL,
								counts FLOAT NOT NULL)

CREATE TABLE Ingredient(id_ingredient INT PRIMARY KEY,
						name_ingredient VARCHAR(50) NOT NULL,
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

CREATE VIEW TableNotOccupation AS
	SELECT * FROM ListTable WHERE occupation = 0;
GO

CREATE VIEW OpenOrder AS
	SELECT * FROM ((OrderMenu INNER JOIN ListOrderMenu ON kod_order = id_order) INNER JOIN Food ON kod_food = id_food) INNER JOIN  Category ON id_category = kod_category 
	WHERE close_order = 0
GO
CREATE VIEW MainShowCategory AS
SELECT count(id_food) AS CountRecord,id_category,name_category FROM Category INNER JOIN Food ON kod_category = id_category 
	GROUP BY id_category,name_category
GO
CREATE VIEW MainShowFood AS
SELECT * FROM Food
GO
CREATE VIEW AdminFood AS
SELECT * FROM Food INNER JOIN  Category ON id_category = kod_category
GO
						


				   						   


							
						   


