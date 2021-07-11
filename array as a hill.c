/*Array of integers is a hill, if:it is strictly increasing in the beginning;after that it is constant;after that it is strictly decreasing.
hill-[5, 7, 11, 11, 2, 1], [4, 4, 2], [7];
not a hill-[5, 5, 6, 6, 1], [1, 2, 1, 2], [4, 5, 5, 6];
Print "yes" if the given array is a hill. Otherwise, print "no".*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
        
    for(i=0;i<n-1;i++)
    {
        if(a[i]>=a[i+1])break;
    }
    while(i<n-1)
    {
        if(a[i]==a[i+1]) i++;
        else break;
    }
    while(i<n-1)
    {
        if(a[i]>a[i+1]) i++;
        else break;
    }
    if(i==n-1)
        printf("yes");
    else
        printf("no");
    return 0;
}
