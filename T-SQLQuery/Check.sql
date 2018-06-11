SELECT id_order,
	   date_open_order,
	   date_close_order,
	   pib_personal,
	   pib_client,
	   payment,
	   discount,
	   name_food,
	   sum(counts) AS CountFood,
	   price_food

FROM ((((OrderMenu INNER JOIN Personal ON id_personal = kod_personal)
				 INNER JOIN Discounts ON id_discount = kod_discount)
			     INNER JOIN ListTable ON id_table = kod_table)
				 INNER JOIN ListOrderMenu ON id_order = kod_order)
				 INNER JOIN Food ON id_food = kod_food
GROUP BY id_order,date_open_order,date_close_order,pib_personal,pib_client,payment,discount,name_food,price_food
