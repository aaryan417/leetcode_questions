# Write your MySQL query statement below
select d.name as Department , e.name as Employee , e.Salary as Salary
from Employee e
left join Department d
on e.departmentId=d.id
where e.Salary = (
   select max(Salary)
   from Employee
    where departmentId = e.departmentId

)
