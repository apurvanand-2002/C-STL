#include <iostream>
using namespace std;
void sort(int A[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < (n - 1); i++)
    {
        if (A[i] > A[i + 1])
        {
            int temp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = temp;
        }
    }
    sort(A, n - 1);
}
int main()
{
    int A[] = {23, 34, 2, 689, 65, 674, 43, 3};
    int size = sizeof(A) / sizeof(int);
    sort(A, size);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}