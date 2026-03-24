SELECT id
FROM (
    SELECT
        id,
        temperature,
        LAG(temperature) OVER (ORDER BY recordDate) AS prev_temp
    FROM Weather
) t
WHERE temperature > prev_temp;
