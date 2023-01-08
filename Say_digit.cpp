#include <iostream>
using namespace std;
string names[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void sayDigit(int n)
{
    int t = n % 10;
    if ((t < 0 || t > 9) || n == 0)
    {
        return;
    }
    n = (n / 10);
    sayDigit(n);
    cout << names[t] << " ";
}
int main()
{
    int n;
    cin >> n;
    sayDigit(n);
}