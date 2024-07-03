# Write your MySQL query statement below
select v.customer_id,CoUNT(customer_id) as count_no_trans
FROM Visits v
Left Join Transactions t
ON v.visit_id = t.visit_id
WHERE t.transaction_id is NULL
Group BY (customer_id);