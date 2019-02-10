#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll x, n, y, z;

int main()
{
    /** calculates z = (x^y)%n **/
    cin >> x >> y >> n;
    z = 1;
    while(y > 0)
    {
        if(y&1)
        {
            z = (z*x)%n;
        }
        x = (x*x)%n;
        y = y>>1;
    }
    cout << z << '\n';
    return 0;
}
