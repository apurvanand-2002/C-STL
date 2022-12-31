#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Size: " << vec.size() << endl;
    vec.push_back(1);
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Size: " << vec.size() << endl;
    vec.push_back(2);
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Size: " << vec.size() << endl;
    vec.push_back(3);
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Size: " << vec.size() << endl;
    vec.push_back(4);
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Size: " << vec.size() << endl;
    vec.push_back(5);
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Size: " << vec.size() << endl;
    // vector's actual capacity keeps on increasing so as to increase its size.
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\nSecond way of printing:" << endl;
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << "\nThird way of printing:" << endl;
    vector<int>::iterator it;
    it = vec.begin();
    while (it != vec.end())
    {
        cout << (*(it)) << " ";
        it++;
    }
    cout << endl;
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;
    cout << "Element at index-3 is " << vec.at(3) << endl;
    vector<int> brr(6, 2);
    // makes 'brr' vector containing six 2s.
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    vector<int> again(vec);
    // making 'again' as copy of 'vec'.
    vector<int>::iterator iti;
    iti = again.begin();
    while (iti != again.end())
    {
        cout << (*(iti)) << " ";
        iti++;
    }
    cout << endl;
}