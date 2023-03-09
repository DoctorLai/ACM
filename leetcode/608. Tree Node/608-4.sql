# https://helloacm.com/how-to-determine-the-type-of-tree-nodes-using-sql/
# https://leetcode.com/problems/tree-node/
# MEDIUM, SQL

select id, 
    if (p_id is null, "Root", 
      if (exists (select * from tree as t2 where t1.id = t2.p_id), "Inner", "Leaf")
    )
as Type from tree as t1;
