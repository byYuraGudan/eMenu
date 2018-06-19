--SELECT pib_personal,count(id_order) AS CountOrder,sum(payment) AS Payment, sum(payment-(payment*discount/100)) AS PaymentDiscount FROM (Personal INNER JOIN OrderMenu ON id_personal = kod_personal) INNER JOIN Discounts ON kod_discount = id_discount
--WHERE date_open_order >= '10.06.2018 14:41:13' and date_open_order <= '11.06.2018 08:39:28'
--GROUP BY pib_personal
--
--SELECT name_food,count(counts) AS CountSale FROM (Food INNER JOIN ListOrderMenu ON kod_food = id_food) INNER JOIN OrderMenu ON id_order = kod_order
--WHERE date_open_order >= '10.06.2018 14:41:13' and date_open_order <= '11.06.2018 08:39:28'
--GROUP BY name_food
--ORDER BY CountSale desc
--
--SELECT id_order,date_open_order,pib_personal,pib_client,payment,discount,sum(payment-(payment*discount/100)) AS PaymentDiscount 
--FROM ((OrderMenu INNER JOIN Personal ON id_personal = kod_personal) INNER JOIN Discounts ON id_discount = kod_discount) INNER JOIN ListTable ON id_table = kod_table
--WHERE date_open_order >= '10.06.2018 14:41:13' and date_open_order <= '11.06.2018 08:39:28'
--GROUP BY id_order,date_open_order,pib_personal,pib_client,payment,discount
--
--SELECT name_food,name_ingredient, sum(ListOrderMenu.counts * ListIngredientFood.counts) AsCountSaleIngredient,unit,sum(ListIngredientFood.price * ListOrderMenu.counts) AS SaleFood FROM ((OrderMenu INNER JOIN ListOrderMenu ON id_order = kod_order) INNER JOIN Food ON id_food = ListOrderMenu.kod_food )INNER JOIN ListIngredientFood ON ListIngredientFood.kod_food = id_food
--WHERE date_open_order >= '10.06.2018 14:41:13' and date_open_order <= '11.06.2018 08:39:28'
--GROUP BY name_food,name_ingredient,unit
--
--SELECT id_discount,pib_client,count(id_order) AS CountBuyOrder,sum(payment - (payment*discount/100)) AS PaymentAll FROM Discounts INNER JOIN OrderMenu ON kod_discount = id_discount
--WHERE date_open_order >= '10.06.2018 14:41:13' and date_open_order <= '11.06.2018 08:39:28'
--GROUP BY id_discount,pib_client


SELECT name_food, sum(ListOrderMenu.counts) AS CountSale,price_food,mark_up,cost_price_food,sum(ListOrderMenu.counts)*cost_price_food as SaleNotMarkUP,sum(ListOrderMenu.counts)*price_food as SaleMarkUP, (sum(ListOrderMenu.counts)*price_food)-(sum(ListOrderMenu.counts)*cost_price_food) AS Difference
FROM (OrderMenu INNER JOIN ListOrderMenu ON id_order = kod_order) INNER JOIN Food ON id_food = ListOrderMenu.kod_food
GROUP BY name_food,price_food,cost_price_food,mark_up
ORDER BY CountSale desc