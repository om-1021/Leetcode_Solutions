SELECT id,COUNT(*) AS num
    
  FROM
      (  
         SELECT requester_id AS id FROM RequestAccepted

            UNION ALL # it gives duplicates also

        SELECT accepter_id AS id FROM RequestAccepted
       ) 
    AS friend_count
GROUP BY id
ORDER BY num DESC
LIMIT 1;
   