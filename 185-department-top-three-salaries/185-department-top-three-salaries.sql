select department, employee, salary from
(select c.*, dense_rank() over (partition by department order by salary desc) as rnk from
(select b.name as department, a.name as employee, a.salary from employee a
left join
department b
on a.departmentId = b.id)c)d
where rnk<=3;