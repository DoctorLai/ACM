# https://helloacm.com/sql-algorithm-to-compute-shortest-distance-in-a-plane/
# https://leetcode.com/problems/shortest-distance-in-a-plane/
# MEDIUM, SQL

select 
  round(sqrt(min(pow(a.x - b.x,2) + pow(a.y - b.y,2))), 2) as 'shortest'
from 
  point_2d a, point_2d b
where
  a.x != b.x or a.y != b.y;
