# https://helloacm.com/teaching-kids-programming-second-highest-distinct-record-using-sql/
# https://leetcode.com/problems/second-highest-salary/
# EASY, MATH, SQL

select max(Salary) SecondHighestSalary 
from Employee
where Salary not in (select max(Salary) from Employee)
