SELECT(SELECT DISTINCT Salary 
FROM Employee
ORDER BY Salary DESC
LIMIT 1 OFFSET 1) as SecondHighestSalary ;

-- Writing as the subquery just because we need to return null