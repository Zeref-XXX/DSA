#include <bits/stdc++.h>
using namespace std;

bool pm(long long a, long long b, long long c, long long d)
{
    if ((a + b - c) == d)
        return true;
    else
        return false;
}
bool mp(long long a, long long b, long long c, long long d)
{
    if ((a - b + c) == d)
        return true;
    else
        return false;
}
bool pmul(long long a, long long b, long long c, long long d)
{
    if ((a + b * c) == d)
        return true;
    else
        return false;
}
bool mulp(long long a, long long b, long long c, long long d)
{
    if ((a * b + c) == d)
        return true;
    else
        return false;
}
bool mulm(long long a, long long b, long long c, long long d)
{
    if ((a * b - c) == d)
        return true;
    else
        return false;
}
bool mmul(long long a, long long b, long long c, long long d)
{
    if ((a - b * c) == d)
        return true;
    else
        return false;
}

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (pm(a, b, c, d))
    {
        cout<<"YES";
    }
    else if (mp(a, b, c, d))
    {
        cout<<"YES";
    }
    else if (pmul(a, b, c, d))
    {
        cout<<"YES";
    }
    else if (mulp(a, b, c, d))
    {
        cout<<"YES";
    }
    else if (mulm(a, b, c, d))
    {
        cout<<"YES";
    }
    else if (mmul(a, b, c, d))
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}