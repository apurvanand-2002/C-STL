// Set is binary search tree based thats why it always returns unique values and those
// unique values are also returned in sorted order.
// There is also 'unordered set' which returns unique values but not in sorted order as
// unordered set uses binary tree not BST.
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(10);
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Size of set is " << s.size() << endl;
    cout << "Is set empty? " << s.empty() << endl;
    /*-------------------------------------------------------------------------------*/
    unordered_set<int> us;
    us.insert(2);
    us.insert(2);
    us.insert(2);
    us.insert(5);
    us.insert(5);
    us.insert(5);
    us.insert(5);
    us.insert(3);
    us.insert(2);
    us.insert(2);
    us.insert(3);
    us.insert(3);
    for (auto itr : us)
    {
        cout << itr << " ";
    }
    /*-----------------------------------------------------------------------------------*/
    set<int>::iterator it;
    it = s.begin();
    cout << endl;
    while (it != s.end())
    {
        cout << (*(it)) << " ";
        it++;
    }
    cout << endl;
    set<int>::iterator itr;
    itr = s.begin();
    itr++;
    s.erase(itr);
    for (auto i : s)
    {
        cout << i << ' ';
    }
    cout << endl;
    cout << "Is set empty? " << s.empty() << endl;
    // s.count(element) tells if that enetered element is already present in set.
    cout << "Is 5 present? " << s.count(5) << endl;
    cout << "Is 9 present? " << s.count(9) << endl;
    // s.find() returns the iterator corresponding to that element if that element is found
    // it can further be used to print further set elements.
    set<int>::iterator itri;
    itri = s.find(5);
    for (itri; itri != s.end(); itri++)
    {
        cout << (*(itri)) << " ";
    }
}