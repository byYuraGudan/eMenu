SELECT id_order,
	   count(id_listordermenu) AS CountMenu,
	   sum(counts * price_food) AS Oplata,
	   discount,
	   (sum(counts * price_food) - (sum(counts * price_food) * (discount / 100))) AS OplataDiscount,
	   pib_client,
	   pib_personal,date_open_order
FROM 
((((eMenu.dbo.OrderMenu INNER JOIN eMenu.dbo.Discounts ON id_discount = kod_discount)
					   INNER JOIN eMenu.dbo.ListTable ON id_table = kod_table)
					   INNER JOIN eMenu.dbo.Personal ON id_personal = kod_personal)
					   INNER JOIN eMenu.dbo.ListOrderMenu ON kod_order = id_order)
					   INNER JOIN eMenu.dbo.Food ON kod_food = id_food
GROUP BY id_order,date_open_order,date_close_order,discount,pib_client,pib_personal,date_open_order