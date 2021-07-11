/*Three integers, A, B and M.
Output one integer denoting the value of AB % M.
in python one line-a,b,m=map(int,input().split())
print(pow(a,b,m))*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long int ll;
ll power (ll x,ll y,ll p)
{
    ll res=1;
    x=x%p;
    while(y>0)
    {
        if(y&1)
            res=(res*x)%p;
        y=y>>1; //y=y/2
        x=(x*x)%p;
    }
    return res;
}

int main() {

    ll x,y,p,o;
    scanf("%lld %lld %lld",&x,&y,&p);
    o=power(x,y,p);
    printf("%lld",o);
    return 0;
}
