# Write your MySQL query statement below
select a1.machine_id , ROUND(AVG(a1.timestamp - a2.timeStamp),3) as processing_time
from Activity a1
INNER JOIN Activity a2
WHERE a1.machine_id = a2.machine_id
AND a1.process_id = a2.process_id
AND a1.timestamp > a2.timestamp
GROUP BY a1.machine_id;
