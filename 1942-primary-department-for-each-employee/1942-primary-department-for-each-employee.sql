# Write your MySQL query statement below
select DISTINCT employee_id,department_id
from employee
where primary_flag = 'Y' OR (employee_id,department_id )IN (
    select employee_id,department_id
    from employee
    group by employee_id
    HAVING COUNT(employee_id) = 1
)