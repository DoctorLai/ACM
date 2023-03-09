# https://helloacm.com/how-to-determine-the-type-of-tree-nodes-using-sql/
# https://leetcode.com/problems/tree-node/
# MEDIUM, SQL

select id, 
    if (p_id is null, "Root",
            if (id in (select p_id from tree where p_id is not null), "Inner", "Leaf")
       ) as Type 
from tree as t1;
