/*To find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.
example: 5 = 2 + 3,17 = 2 + 3 + 5 + 7,41 = 2 + 3 + 5 + 7 + 11 + 13*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isprime(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
    
}
int main() {
    int n;
    scanf("%d",&n);
    int c=0,sum=2,next=3;
    while(sum<=n)
    {
        if(isprime(next))
        {
            sum+=next;
            if(sum<=n && isprime(sum))
                c++;
        }
        next++;
    }
    printf("%d",c);
    return 0;
}
