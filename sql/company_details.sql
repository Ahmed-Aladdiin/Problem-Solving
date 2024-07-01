/*
Enter your query here.
*/
with c as (
    select company_code, founder
    from company
    group by company_code, founder
), l as (
    select company_code, lead_manager_code
    from lead_manager
    group by company_code, lead_manager_code
), s as (
    select company_code, lead_manager_code, senior_manager_code
    from senior_manager
    group by company_code, lead_manager_code, senior_manager_code
), m as (
    select company_code, lead_manager_code, senior_manager_code, manager_code
    from manager
    group by company_code, lead_manager_code, senior_manager_code, manager_code
), e as (
    select company_code, lead_manager_code, senior_manager_code, manager_code, employee_code
    from employee
    group by company_code, lead_manager_code, senior_manager_code, manager_code, employee_code
)
select c.company_code, c.founder, count(l.lead_manager_code), count(s.senior_manager_code), count(m.manager_code), count(e.employee_code)
from c
join l on l.company_code = c.company_code
join s on s.company_code = c.company_code
join m on m.company_code = c.company_code
join e on e.company_code = c.company_code
group by c.company_code, c.founder
order by c.company_code;
