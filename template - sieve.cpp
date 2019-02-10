#include<bits/stdc++.h>
using namespace std;

const int sz = 100000009;
bitset<sz> nonprime;

void sieve()
{
    int lim = ceil(sqrt(sz));
    for(int i=4; i<sz; i+=2)
    {
        nonprime[i] = 1;
    }
    for(int i=3; i<=lim; i+=2)
    {
        if(nonprime[i]==0)
        {
            for(int j=i*i; j<sz; j=j+i+i)
            {
                nonprime[j] = 1;
            }
        }
    }
    /* sieve complete */
    /** add additional lines if necessary **/
}

int main()
{
    sieve();
    /** do required tasks **/
    return 0;
}
