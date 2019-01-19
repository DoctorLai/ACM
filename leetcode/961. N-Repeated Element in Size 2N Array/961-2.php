// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
    function repeatedNTimes($A) {
        $s = count($A);
        while (($A[$i = rand() % $s] != $A[$j = rand() % $s]) || $i == $j);
        return $A[$i];
    }
}