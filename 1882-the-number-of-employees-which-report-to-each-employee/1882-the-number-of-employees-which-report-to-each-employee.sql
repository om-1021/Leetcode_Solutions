# Write your MySQL query statement below
SELECT  
    e1.employee_id,
    e1.name,
    COUNT(e2.reports_to) as reports_count,
    ROUND(AVG(e2.age)) AS average_age
FROM Employees AS e1 INNER JOIN Employees AS e2
ON e1.employee_id = e2.reports_to
GROUP BY  e1.employee_id,e1.name
ORDER BY employee_id;
