WITH Doctors AS (
    SELECT name, ROW_NUMBER() OVER (ORDER BY name) AS rn
    FROM occupations
    WHERE occupation = 'Doctor'
),
Professors AS (
    SELECT name, ROW_NUMBER() OVER (ORDER BY name) AS rn
    FROM occupations
    WHERE occupation = 'Professor'
),
Singers AS (
    SELECT name, ROW_NUMBER() OVER (ORDER BY name) AS rn
    FROM occupations
    WHERE occupation = 'Singer'
),
Actors AS (
    SELECT name, ROW_NUMBER() OVER (ORDER BY name) AS rn
    FROM occupations
    WHERE occupation = 'Actor'
)
SELECT 
    D.name AS doc,
    P.name AS pro,
    S.name AS sin,
    A.name AS act
FROM 
    Doctors D
FULL OUTER JOIN 
    Professors P ON D.rn = P.rn
FULL OUTER JOIN 
    Singers S ON COALESCE(D.rn, P.rn) = S.rn
FULL OUTER JOIN 
    Actors A ON COALESCE(D.rn, P.rn, S.rn) = A.rn
ORDER BY 
    COALESCE(D.rn, P.rn, S.rn, A.rn);

