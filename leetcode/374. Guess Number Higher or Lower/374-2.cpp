// https://helloacm.com/binary-search-to-guess-number-game-c-coding-exercise/
// https://leetcode.com/problems/guess-number-higher-or-lower/

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2; // avoid integer overflow
            switch(guess(mid)) {
                case 0: return mid;
                case -1: high = mid - 1; break;
                case 1: low = mid + 1; break;
            }
        }
        return -1; // indicate the number is not in the range. (NOT FOUND)
    }
};
