// https://helloacm.com/sql-inner-join-tutorial-with-example-managers-with-at-least-5-direct-reports/
// https://leetcode.com/problems/managers-with-at-least-5-direct-reports/

select Name from
Employee where Id in (
 select ManagerId from Employee
 group by ManagerId
 having count(ManagerId) >= 5
)
