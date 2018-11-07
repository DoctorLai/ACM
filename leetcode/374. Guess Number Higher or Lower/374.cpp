// https://helloacm.com/binary-search-to-guess-number-game-c-coding-exercise/
// https://leetcode.com/problems/guess-number-higher-or-lower/

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);
 
class Solution {
public:
    int guessNumber(int n) {
        return guessNumber(1, n);   
    }
    
private:
    int guessNumber(int low, int high) {
        int mid = low + (high - low) / 2;
        int x = guess(mid);
        if (x == 0) return mid;
        if (x == -1) return guessNumber(low, mid - 1);
        return guessNumber(mid + 1, high);
    }
};
