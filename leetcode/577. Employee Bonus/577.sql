# https://helloacm.com/sql-left-outer-join-tutorial-with-example-employee-bonus/
# https://leetcode.com/problems/employee-bonus/
# EASY, SQL

SELECT
    Employee.name, Bonus.bonus
FROM
    Employee
        LEFT JOIN
    Bonus ON Employee.empid = Bonus.empid
WHERE
    bonus < 1000;
