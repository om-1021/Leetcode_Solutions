# Write your MySQL query statement below
select w1.id
from Weather as w1
Inner join Weather as w2
Where DateDiff(w1.recordDate,w2.recordDate) = 1
AND w1.temperature > w2.temperature;