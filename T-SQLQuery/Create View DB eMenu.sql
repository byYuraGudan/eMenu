USE eMenu
GO
--DROP VIEW TableNotOccupation,OpenOrder
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