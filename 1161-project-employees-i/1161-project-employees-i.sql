# Write your MySQL query statement below
select project_id,ROUND(AVG(e.experience_years),2) as average_years
from project p
left join Employee e
on p.employee_id = e.employee_id
GROUP BY project_id;

