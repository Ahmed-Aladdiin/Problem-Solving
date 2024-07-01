select s.hacker_id as hid, h.name as hname
from submissions s
join hackers h on h.hacker_id = s.hacker_id
join challenges c on c.challenge_id = s.challenge_id
join difficulty d on d.difficulty_level = c.difficulty_level 
where s.score = d.score
group by s.hacker_id, h.name
having count(s.challenge_id) > 1
order by count(s.challenge_id) desc, s.hacker_id;
