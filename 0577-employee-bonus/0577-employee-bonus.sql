# Write your MySQL query statement below
select e.name,b.bonus
From employee e
Left join bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000 OR b.bonus IS NULL;