# Write your MySQL query statement below
SELECT name AS Customers
FROM (
    SELECT c.name, o.customerId
    FROM Customers c
    LEFT JOIN Orders o ON c.id = o.customerId
) AS merge
WHERE merge.customerId IS NULL;