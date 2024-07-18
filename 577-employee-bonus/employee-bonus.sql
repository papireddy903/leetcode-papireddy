/* Write your T-SQL query statement below */

SELECT name, bonus 
FROM Employee 
FULL OUTER JOIN Bonus
    ON Employee.empId = Bonus.empId 

WHERE bonus < 1000 OR bonus IS NULL

