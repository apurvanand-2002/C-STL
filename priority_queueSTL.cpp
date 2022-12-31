/*Priority queue is max-heap by default so, even if we insert element in any order , when
we pop out elements, we will get maximum elements out first then minimum elements there-
after. We must include 'queue' in header file and declaration of 'priority_queue<int>' in main
function will help prepare a max-heap priority queue by defalult but we can make
min-heap priority queue also using
 priority_queue<int, vector<int>, greater<int> >.*/
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> maxim;                            // max-heap priority queue
    priority_queue<int, vector<int>, greater<int>> minim; // min-heap priority queue
    maxim.push(1);
    maxim.push(0);
    maxim.push(5);
    maxim.push(3);
    maxim.push(2);
    maxim.push(1);
    cout << "Size of max-heap priority queue now is " << maxim.size() << endl;
    int n = maxim.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxim.top() << " ";
        maxim.pop();
    }
    cout << endl;
    cout << "Is maxim empty? " << maxim.empty() << endl;

    minim.push(1);
    minim.push(0);
    minim.push(5);
    minim.push(3);
    minim.push(2);
    minim.push(1);
    cout << "Size of minim now is " << minim.size() << endl;
    int m = minim.size();
    for (int i = 0; i < m; i++)
    {
        cout << minim.top() << " ";
        minim.pop();
    }
}