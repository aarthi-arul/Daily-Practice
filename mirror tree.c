/*First line consists of the number of nodes N.
Next N-1 lines each describes the first tree. and second respectively.
Print "yes" if the two trees are mirrors of each other and "no" otherwise*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int t1[1000][2],t2[1000][2];
int main() {
    int n;scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        char c;
        scanf("%d %d %c",&x,&y,&c);
        if(c=='L') t1[x][0]=y;
        else t1[x][1]=y;
    }
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        char c;
        scanf("%d %d %c",&x,&y,&c);
        if(c=='L') t2[x][0]=y;
        else t2[x][1]=y;
    }
    int f=0;
    for(int i=1;i<=n;i++)
    {
        if(t1[i][0]!=t2[i][1] || t1[i][1]!=t2[i][0])
        {
            f=1;
            break;
        }
    }
    if(f==0)printf("yes");
    else printf("no");
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
