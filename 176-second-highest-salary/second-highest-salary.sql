WITH SortedTable AS (
    SELECT salary, ROW_NUMBER() OVER (ORDER BY salary DESC) AS ct FROM (SELECT DISTINCT salary FROM Employee) nTable
) 

SELECT 
    CASE 
        WHEN MAX(ct) >= 2 THEN (SELECT salary FROM SortedTable WHERE ct = 2)
        ELSE NULL
    END AS SecondHighestSalary
FROM SortedTable;
