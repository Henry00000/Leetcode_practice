SELECT name AS Customers FROM Customers 
WHERE id NOT in(
    SELECT CustomerID FROM Orders
)