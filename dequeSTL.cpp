#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (auto it : d)
    {
        cout << it << " ";
    }
    cout << endl;
    d.push_front(3);
    d.push_back(4);
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    d.push_front(5);
    d.push_back(6);
    deque<int>::iterator it;
    it = d.begin();
    while (it != d.end())
    {
        cout << (*(it)) << " ";
        it++;
    }
    cout << "\nSize of deque d is " << d.size() << endl;
    cout << "Maxsize of deque d is " << d.max_size() << endl;
    cout << "\nfirst element: " << d.front() << endl;
    cout << "Last element is: " << d.back() << endl;
    cout << "Element at index-2 is " << d.at(2) << endl;
    d.pop_back();
    d.pop_front();
    for (auto it : d)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Size of deque d is " << d.size() << endl;
    cout << "Maxsize of deque d is " << d.max_size() << endl;
    cout << "Is deque d empty? " << d.empty() << endl;
    d.erase(d.begin(), d.begin() + 2);
    for (auto it : d)
    {
        cout << it << " ";
    }
}