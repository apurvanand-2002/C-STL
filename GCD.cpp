#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    else if (a == b)
    {
        return a;
    }
    else if (a > b)
    {
        return GCD(a - b, a);
    }
    else
    {
        return GCD(a, b - a);
    }
}
int main()
{
    cout << "Enter 2 numbers:" << endl;
    int a, b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << GCD(a, b) << " .\n";
}