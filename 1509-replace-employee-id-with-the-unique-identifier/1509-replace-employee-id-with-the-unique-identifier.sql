select unique_id,name From Employees LEFT JOIN EmployeeUNI 
ON Employees.id = EmployeeUNI.id;