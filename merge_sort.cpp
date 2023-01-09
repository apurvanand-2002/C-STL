#include <iostream>
using namespace std;
void merge(int *A, int s, int e)
{
    int mid = ((s + e) / 2);
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int index = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = A[index++];
    }
    // index = (mid + 1);
    for (int i = 0; i < len2; i++)
    {
        second[i] = A[index++];
    }

    int p = 0, q = 0, k = s;
    while (p < len1 && q < len2)
    {
        if (first[p] < second[q])
        {
            A[k++] = first[p++];
        }
        else if (first[p] > second[q])
        {
            A[k++] = second[q++];
        }
    }
    while (p < len1)
    {
        A[k++] = first[p++];
    }
    while (q < len2)
    {
        A[k++] = second[q++];
    }
}
void mergeSort(int *A, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = ((s + e) / 2);
    mergeSort(A, s, mid);
    mergeSort(A, mid + 1, e);
    merge(A, s, e);
}
int main()
{
    int A[] = {1, 23, 3, 456, 45, 56, 78, 999, 8};
    int size = sizeof(A) / sizeof(int);
    mergeSort(A, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}