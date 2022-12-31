/* Map  by default is ordered map in STL, for implementation it uses 'balanced tree' or
'red-black tree' so, for most operations like find, count etc ,ordered map has a time
complexity of O(logn).
But as 'unordered map' uses hashmaps so, it is more faster as keys can be easily
accessed in O(1) time.
Also, in ordered map, we get outputs in sorted order if it is possible to sort but in
unordered map, it is totally random ,so, one may get in sorted or unsorted manner.
For accessing key and value pairs in map, we use it.first and it.second.
find returns iterator and count tells about the presence but note that these 'find' and
'count' work on keys only and not on values.*/
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    map<int, string> naming;
    naming[1] = "Apurv";
    naming[2] = "Anand";
    naming[3] = "ONLY";
    for (auto it : naming)
    {
        cout << it.first << " " << it.second << endl;
    }
    /*-----------------------------------------------------------------------------*/
    cout << "-----------------------------" << endl;
    unordered_map<int, string> namings;
    namings[1] = "Apurv";
    namings[3] = "ONLY";
    namings[2] = "Anand";
    for (auto it : namings)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << "--------------------------------" << endl;
    /*-------------------------------------------------------------------------------*/
    cout << "Is map naming empty? " << naming.empty() << endl;
    cout << "naming has key=2 ? " << naming.count(2) << endl;
    map<int, string>::iterator it;
    cout << "------------------------" << endl;
    it = naming.find(2);
    while (it != naming.end())
    {
        cout << (*(it)).first << " " << (*(it)).second << endl;
        it++;
    }
}