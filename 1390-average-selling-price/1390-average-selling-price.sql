# Write your MySQL query statement below
SELECT p.product_id, IFNULL(ROUND(SUM(p.price * u.units)/SUM(u.units),2),0.00) as average_price
FROM prices p
LEFT JOIN UnitsSold u
ON p.product_id = u.product_id
AND p.start_date <= u.purchase_Date
AND p.end_Date >= u.purchase_Date
GROUP BY p.product_id ;