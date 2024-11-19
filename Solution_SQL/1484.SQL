WITH Unique_Activities AS (
    SELECT DISTINCT sell_date, product
    FROM Activities
)
SELECT sell_date, 
COUNT(DISTINCT product) AS num_sold, 
STRING_AGG(product, ',') WITHIN GROUP (ORDER BY product ASC) AS products
FROM Unique_Activities
GROUP BY sell_date;