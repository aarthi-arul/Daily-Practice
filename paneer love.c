/*The first line of input contains integer n - the number of days.
In the next n lines, i-th line contains two integers ai and pi (1<=ai, pi<=100), the amount of Paneer Chappu needs and the cost of Paneer in that day.
Print the minimum money needed to keep Chappu happy for n days, in one line.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[n],p[n];
    for(int i=0;i<n;i++)
        scanf("%d %d",&a[i],&p[i]);
    for(int i=0;i<n-1;i++)
    {
        if(p[i]<p[i+1])
            p[i+1]=p[i];
    }
    for(int i=0;i<n;i++)
        sum+=a[i]*p[i];
    printf("%d",sum);
    return 0;
}
