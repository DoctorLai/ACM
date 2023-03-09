# https://helloacm.com/sql-algorithm-to-compute-shortest-distance-in-a-plane/
# https://leetcode.com/problems/shortest-distance-in-a-plane
# MEDIUM, SQL

select
  round(sqrt(min(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)))), 2) as shortest
from
  point_2d p1
join
  point_2d p2 on p1.x != p2.x or p1.y != p2.y;
