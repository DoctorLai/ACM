// https://helloacm.com/counting-the-prime-arrangements/
// https://leetcode.com/problems/prime-arrangements/

class Solution {
public:
    int numPrimeArrangements(int n) {
        countPrimes();
        int numOfPrimes = 0;
        for (int i = 1; i <= n; ++ i) {
            if (primes[i]) {
                numOfPrimes ++;
            }
        }
        return ((int64_t)(fact(numOfPrimes) % MOD) * (fact(n - numOfPrimes) % MOD)) % MOD;
    }
private:
    const int MOD = (int)(1e9 + 7);
    static const int MAXN = 101;
    bool primes[MAXN];
    
    void countPrimes() {
        std::fill(begin(primes), end(primes), true);
        primes[0] = false;
        primes[1] = false;        
        int i = 2;
        while (i < MAXN) {            
            int j = i;
            while (j + i < MAXN) {
                j += i;
                primes[j] = false;
            }
            i ++;
            while ((i < MAXN) && (!primes[i])) i ++;            
        }
    }
    
    int fact(int n) {
        int64_t r = 1;
        for (int i = 2; i <= n; ++ i) {
            r = ((r % MOD) * (i % MOD)) % MOD;
        }
        return (int)r;
    }
};
