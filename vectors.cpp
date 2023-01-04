#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);

    v.push_back(2);

    for (int i = 3; i <= 10; i++)
    {
        v.push_back(i);
    }

    vector<int> v2(v); // copies the vector v

    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << endl;

    // for-each

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "deleting the 2nd to 5th element" << endl;
    v.erase(v.begin() + 1, v.begin() + 5);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;

    cout << "size of the vector" << v.size() << endl;

    return 0;
}