#include <iostream>
using namespace std;
bool isSorted(int *A, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (A[0] > A[1])
    {
        return false;
    }
    else
    {
        isSorted(A + 1, (n - 1));
    }
}
int main()
{
    int A[] = {1, 3, 52, 7, 9, 11};
    int size = sizeof(A) / sizeof(int);
    if (isSorted(A, size) == true)
    {
        cout << "Sorted!" << endl;
    }
    else
    {
        cout << "NOT SORTED!" << endl;
    }
}