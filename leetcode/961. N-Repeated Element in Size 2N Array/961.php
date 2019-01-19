// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
    function repeatedNTimes($A) {
        $len = count($A);
        $hash = [];
        for ($i = 0; $i < $len; ++ $i) {
            if (isset($hash[$A[$i]])) {
                return $A[$i];
            }
            $hash[$A[$i]] = true;
        }
    }
}