#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int result=(c+1);
    // cout <<result%26;
    if(result>122) result -= 26;
    cout<<(char)(result );
    return 0;
}