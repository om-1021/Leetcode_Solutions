# Write your MySQL query statement below
SELECT
    CASE 
        WHEN
            id = (SELECT MAX(id) FROM Seat) AND MOD(id,2) = 1 # for last odd ID -> no change
        THEN    
            id
        WHEN 
            MOD(id,2) = 1 # for normal odd id
        THEN 
            id + 1
        ELSE
            id - 1 # for normal even id
    END AS id,student
FROM Seat
ORDER BY id;
            