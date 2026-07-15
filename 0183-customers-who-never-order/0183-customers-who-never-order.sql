# Write your MySQL query statement below
SELECT name AS Customers
FROM (
    SELECT c.name, o.customerId
    FROM Customers c
    LEFT JOIN Orders o ON c.id = o.customerId
) AS map
WHERE map.customerId IS NULL;