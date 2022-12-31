#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "First element is " << arr.front() << endl;
    cout << "Last element is " << arr.back() << endl;
    cout << "Element at index-2 is " << arr.at(2) << endl;
    cout << "Is arr empty? " << arr.empty() << endl;
}