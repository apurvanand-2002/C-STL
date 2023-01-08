#include <iostream>
using namespace std;
bool binary_search(int A[], int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }
    int mid = ((s + e) / 2);
    if (A[mid] == key)
    {
        return true;
    }
    if (A[mid] < key)
    {
        return binary_search(A, mid + 1, e, key);
    }
    else
    {
        return binary_search(A, s, mid - 1, key);
    }
}
int main()
{
    int A[] = {12, 23, 45, 56, 67, 78, 89, 90};
    int size = sizeof(A) / sizeof(int);
    cout << binary_search(A, 0, size - 1, 56);
}