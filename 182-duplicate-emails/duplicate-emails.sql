WITH NumberRows AS (
    SELECT *, ROW_NUMBER() OVER (PARTITION BY email ORDER BY email) 
    AS EmailCount FROM Person
)

SELECT DISTINCT Email
FROM NumberRows
WHERE EmailCount > 1;