#include <iostream>
using namespace std;
int sum(int A[], int n)
{
    if (n == 0)
    {
        return (0);
    }
    if (n == 1)
    {
        return (*(A));
    }
    else
    {
        return (*(A)) + sum(A + 1, (n - 1));
    }
}
int main()
{
    int A[] = {1, 2, 3, 40};
    int n = sizeof(A) / sizeof(int);
    cout << "SUM= " << sum(A, n) << endl;
}