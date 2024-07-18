# Write your MySQL query statement below
select contest_id,ROUND(COUNT(distinct user_id)*100/(select COUNT(*) user_id from users),2) as percentage 
from register
Group By contest_id
order by percentage DESC,contest_id