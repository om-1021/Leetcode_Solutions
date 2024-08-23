# Write your MySQL query statement below

SELECT ROUND(COUNT(DISTINCT player_id)/(SELECT COUNT(DISTINCT player_id) FROM activity),2) as fraction
FROM activity
WHERE (player_id,DATE_SUB(event_date, INTERVAL 1 DAY)) IN 
(SELECT player_id,MIN(event_Date) AS first_login
FROM activity 
GROUP BY player_id)



