# https://leetcode.com/problems/find-customer-referee/
# EASY, SQL

select name from customer where referee_id <> 2 or referee_id is NULL;
