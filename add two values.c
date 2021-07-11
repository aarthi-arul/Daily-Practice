//Given two values, they can be integer or floating point numbers, add them
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b;
    scanf("%f %f",&a,&b);
    long x,y;
    x=a;
    y=b;
    if(x==a && y==b)
        printf("%ld",x+y);
    else
        printf("%.2f",a+b);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
