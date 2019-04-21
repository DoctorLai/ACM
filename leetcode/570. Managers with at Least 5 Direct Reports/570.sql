// https://helloacm.com/sql-inner-join-tutorial-with-example-managers-with-at-least-5-direct-reports/
// https://leetcode.com/problems/managers-with-at-least-5-direct-reports/

select Name from Employee as A
inner join (
    select ManagerId
    from Employee
    group by ManagerId
    having count(1) >= 5           
) as B on A.ID = B.ManagerId
