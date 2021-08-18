/*Given a number of dates, sort them in such a way that the date that corresponds to the earliest day comes first and the date that corresponds to the latest day comes last.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {

    int size;
    scanf("%d",&size);
    int d[size],m[size],y[size];
    for(int i=0;i<size;i++)
        scanf("%d %d %d",&d[i],&m[i],&y[i]);
    for(int i=0;i<size;i++)
    {
        int min_index=i;
        for(int j=i+1;j<size;j++)
        {
            if(y[j]<y[min_index])
                min_index=j;
            else if(y[j]==y[min_index])
            {
                if(m[j]<m[min_index])
                    min_index=j;
                else if(m[j]==m[min_index])
                    if(d[j]<d[min_index])
                         min_index=j;
            }
        }
        swap(&y[min_index],&y[i]);
        swap(&m[min_index],&m[i]);
        swap(&d[min_index],&d[i]);
    }
    for(int i=0;i<size;i++)
        printf("%d %d %d\n",d[i],m[i],y[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
