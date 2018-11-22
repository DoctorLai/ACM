// https://helloacm.com/how-to-break-integers-staircases-using-dynamic-programming/
// http://acm.timus.ru/problem.aspx?space=1&num=1017

#include <iostream>
#include <vector>
 
typedef unsigned long long INT64;
 
int main()
{
    std::cin >> m;
    INT64 s = 0;
    std::vector <std::vector<INT64> > f(m + 1, std::vector<INT64>(m + 1, 0));
    f[1][1] = 1;
    for (int i = 2; i <= m; ++ i) // blocks
    {
        for (int j = 1; j <= i; ++ j) // max block
        {
            f[i][j] = f[i - 1][j - 1] + f[i - j][j - 1]; // DP equation
        }
    }
    for (int i = 1; i <= m; ++ i)
    {
        s += f[m][i];
    }
    std::cout << s - 1; // exclude the one-number solution
}
