# Write your MySQL query statement below
select e1.name
from employee e1
inner join employee e2
on e1.id = e2.managerId
GROUP BY e1.id HAVING COUNT(e1.id) >= 5;
