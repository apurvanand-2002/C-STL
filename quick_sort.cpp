#include <iostream>
#include <algorithm>
using namespace std;
int Partition(int A[], int s, int e)
{
    int pivot = A[s];
    int count = 0;
    for (int i = (s + 1); i <= e; i++)
    {
        if (A[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = (s + count);
    swap(A[pivotIndex], A[s]);
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(A[i++], A[j--]);
        }
    }
    return pivotIndex;
}
void quick_sort(int A[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = Partition(A, s, e);
    quick_sort(A, s, p - 1);
    quick_sort(A, p + 1, e);
}
int main()
{
    int A[] = {12, 2, 34, 32, 54, 7, 89, 9};
    int size = sizeof(A) / sizeof(int);
    quick_sort(A, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}