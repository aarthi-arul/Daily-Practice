/*First line contains an integer N, total number of elements in the list.
Out of the N numbers, there will be at most 1 decimal number and the remaining numbers will be Barua Numbers.
Print one number, the product of all the numbers.
The number can only be made up of 1 or 0,cannot start with 0,can have any number of zeroes, but only one instance of the digit one.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n;
    scanf("%d",&n);
    long p=1,c=0,x;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&x);
        while(x%10==0)
        {
            c++;
            x/=10;
        }
        p=p*x;
    }
    printf("%ld",p);
    for(i=0;i<c;i++)
        printf("0");
    return 0;
}