with my_table as (
    select hackers.hacker_id as hid, hackers.name as hname, count(challenge_id) as cc
    from hackers
    join challenges on hackers.hacker_id = challenges.hacker_id
    group by hid, hname
)
select hid, hname, cc
from my_table
where cc in (
    select cc
    from my_table
    group by cc
    having count(*) = 1 or cc = (select max(cc) from my_table)
)
order by cc desc, hid
