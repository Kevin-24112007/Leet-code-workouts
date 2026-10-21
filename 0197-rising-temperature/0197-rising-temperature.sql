# Write your MySQL query statement below
SELECT id
FROM (
    SELECT
        *,
        LAG(temperature) OVER (ORDER BY recordDate) AS prevtemp,
        LAG(recordDate) OVER (ORDER BY recordDate) AS prevdate
    FROM Weather
) w
WHERE
    temperature > prevtemp
AND
    DATEDIFF(recordDate, prevdate) = 1;