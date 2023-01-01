#include <bits/stdc++.h>
#include <bits/stdc++.h>
int modularExponentiation(long long int x, long long int n, long long int m)
{
    // Write your code here.
    long long int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (res % m * x % m) % m;
        }
        x = (x % m * x % m) % m;
        n = (n >> 1);
    }
    return res;
}