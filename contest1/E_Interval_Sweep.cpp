#include <bits/stdc++.h>
using namespace std;
int main()
{
    int e, o;
    cin >> e >> o;
    if (e > 0 || o > 0)
    {
        if(e-o==1 || o-e==1 || e-o==0)
        cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
    return 0;
}