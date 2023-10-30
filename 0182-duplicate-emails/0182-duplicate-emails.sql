# Write your MySQL query statement below
select DISTINCT p1.email from person as p1,person as p2
WHERE p1.email = p2.email AND p1.id <> p2.id;
