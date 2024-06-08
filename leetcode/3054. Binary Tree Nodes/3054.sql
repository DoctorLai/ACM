# https://leetcode.com/problems/binary-tree-nodes/
# https://helloacm.com/teaching-kids-programming-sql-to-determine-the-binary-tree-node-types-nested-select-process-elimination/
# MEDIUM, SQL

select distinct t1.N, 
    case     
        when t1.P is null then 'Root' 
        when t2.P is null then 'Leaf' 
        else 'Inner' 
    end  as Type 
from Tree t1 lee
left join Tree T2 
on t1.N = t2.P
order by T1.N asc
