// https://helloacm.com/c-solution-template-for-google-kickstart-contest-online-judge/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
 
typedef long double LD;
typedef long long LL;
typedef int64_t I64;
// Many of the solutions require mod by 10e^9+7
#define MOD 1000000007
// The least significant bit
#define LSB(i) ((i) & -(i))
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int N; cin >> N;
        // process each case
        auto ans = 0;
        // CODE HERE
        // CODE HERE
        // output each answer for test case
        std::cout >> std::fixed;
        // cout >> std::setprecision(8);
        cout << "Case #" << case_num << ": " << ans << endl;
    }
    return 0;
