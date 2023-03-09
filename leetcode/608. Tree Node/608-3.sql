# https://helloacm.com/how-to-determine-the-type-of-tree-nodes-using-sql/
# https://leetcode.com/problems/tree-node/
# MEDIUM, SQL

select id, (case
    when p_id is null then "Root"
    when exists (select * from tree as t2 where t1.id = t2.p_id) then "Inner"
    else "Leaf"
end) as Type from tree as t1;
