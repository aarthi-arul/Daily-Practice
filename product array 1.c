/*First line of the input contains n and k delimited by whitespace
Second line contains the Array A (modifiable array) with its values delimited by spaces
Third line contains the Array B (non-modifiable array) with its values delimited by spaces
to find the sum of Products of corresponding elements of two arrays of the same size.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k;
    long sum=0;
    scanf("%d %d",&n,&k);
    int a[n],b[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)scanf("%d",&b[i]);
    
    for(int i=0;i<n;i++)sum+=a[i]*b[i];
    
    printf("%ld",sum);
    return 0;
}
