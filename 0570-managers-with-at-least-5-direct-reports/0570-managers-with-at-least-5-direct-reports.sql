# Write your MySQL query statement below
Select e1.name
FROM employee as e1
inner join employee as e2
on e1.id = e2.managerId 
Group by e1.id 
Having COUNT(e1.id) >=5;