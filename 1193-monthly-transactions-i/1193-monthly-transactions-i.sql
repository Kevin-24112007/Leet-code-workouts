# Write your MySQL query statement below
SELECT
    SUBSTR(trans_date, 1, 7) as month,
    country,
    COUNT(id) as trans_count,
    SUM(state = 'approved') as approved_count,
    SUM(amount) as trans_total_amount,
    SUM((state = 'approved') * amount) as approved_total_amount
FROM Transactions
GROUP BY month, country;