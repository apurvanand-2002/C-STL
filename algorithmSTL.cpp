#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    /*Binary Search: returns true or false*/
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout << "Finding 4 , is it there? " << binary_search(vec.begin(), vec.end(), 4);
    cout << endl;
    vector<int> arra;
    arra.push_back(23);
    arra.push_back(2);
    arra.push_back(7);
    arra.push_back(67);
    arra.push_back(56);
    sort(arra.begin(), arra.end());
    for (auto it : arra)
    {
        cout << it << " ";
    }
    cout << endl;
    /*Sorting in STL uses 'intro sorting', it is a mixture of quick-sort, heap sort and
    insertion-sort.*/
    cout << "Using max function directly, Maximum of 32 and 3 is " << max(32, 3) << endl;
    cout << "Using min function directly, minimum of 32 and 3 is " << min(32, 3) << endl;
    int a = 76;
    int b = 67;
    swap(a, b);
    cout << "a= " << a << " and b= " << b << endl;
    string name = "Apurv";
    reverse(name.begin(), name.end());
    cout << name << endl;
    string name2 = "12345";
    rotate(name2.begin(), name2.begin() + 3, name2.end());
    cout << name2 << endl;
}