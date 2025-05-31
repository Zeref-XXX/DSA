#include <bits/stdc++.h>
using namespace std;
int main()
{
    float discount, amount ;
    cin >> discount >> amount;

   float original =( (amount * 100 ) / (100  - discount));

    cout<<fixed << setprecision(2) << original;
    return 0;
}