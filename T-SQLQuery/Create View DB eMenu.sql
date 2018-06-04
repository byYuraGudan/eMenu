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
SELECT *, STR(dbo.Food.weight_food, 5, 3) + ' ' + dbo.Food.unit_food AS weight_unit FROM Food
GO
CREATE VIEW AdminFood AS
SELECT        dbo.Food.id_food, dbo.Food.name_food, dbo.Food.picture, dbo.Food.kod_category, dbo.Food.weight_food, dbo.Food.cost_price_food, dbo.Food.mark_up, 
                         dbo.Food.price_food, dbo.Food.data_food, dbo.Food.unit_food, dbo.Category.id_category, dbo.Category.name_category, STR(dbo.Food.weight_food,5,3) +' '+ dbo.Food.unit_food AS weight_unit
FROM            dbo.Food INNER JOIN
                         dbo.Category ON dbo.Category.id_category = dbo.Food.kod_category
GO
CREATE VIEW AdminFoodIngredient AS 
SELECT id_listingrfood,kod_food,name_ingredient,counts,unit,price 
FROM ListIngredientFood
GO