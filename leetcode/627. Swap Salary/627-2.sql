# https://helloacm.com/the-mysql-if-and-case-statement-exercise-how-to-swap-elements-in-mysql/
# https://leetcode.com/problems/swap-salary/
# EASY, SQL

UPDATE salary
SET
    sex = CASE sex
        WHEN 'm' THEN 'f'
        ELSE 'm'
    END;
