// list in STL is doubly linked list.So, push and pop can be done from both front and end.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
    l.push_back(3);
    l.push_back(4);
    list<int>::iterator it;
    it = l.begin();
    while (it != l.end())
    {
        cout << (*(it)) << " ";
        it++;
    }
    cout << "First element: " << l.front() << endl;
    cout << "Last element is: " << l.back() << endl;
    cout << "Is list l empty? " << l.empty() << endl;
    l.erase(l.begin());
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
    list<int> n(5, 1000);
    for (auto it : n)
    {
        cout << it << " ";
    }
    cout << endl;
    list<int> m(l);
    for (auto it : m)
    {
        cout << it << " ";
    }
}