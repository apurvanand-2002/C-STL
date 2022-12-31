#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << "Size of stack is " << st.size() << endl;
    cout << "Top element in stack is: " << st.top() << endl;
    st.pop();
    cout << "Now, top element is " << st.top() << endl;
    cout << "Is Stack st empty? " << st.empty() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << "Is stack st empty? " << st.empty() << endl;
}
// stack is based on LIFO i.e. Last In First Out.