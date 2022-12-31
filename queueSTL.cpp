#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Front element is: " << q.front() << endl;
    cout << "Size is " << q.size() << endl;
    cout << "Is queue empty? " << q.empty() << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\nNow, is queue empty? " << q.empty() << endl;
}
// queue follows FIFO i.e First In First Out.