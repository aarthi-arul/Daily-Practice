/*2-mat size
1 2
3 4
A 90-rotation 90deg
Q 1 1-print 11 ele /3
Q 1 2-print 12 ele/1
A 90
Q 1 1-/4
U 1 1 6-chane 11 ele(1) to 6
Q 2 2-print 22 ele/6
-1-end of input*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1005][1005],n,state=0;
int get(int x,int y)
{
    if(state==0) return a[x][y];
    if(state==1) return a[y][n-x+1];
    if(state==2) return a[n-x+1][n-y+1];
    return a[n-y+1][x];
}
int main() {
    char c;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    while(1)
    {
        cin>>c;
        if(c=='-') break;
        if(c=='Q')
        {
            int x,y;
            cin>>x>>y;
            cout<<get(x,y)<<endl;
        }
        else if(c=='A')
        {
            int d;
            cin>>d;
            d/=90;
            state=(state-d)%4;
            if(state<0)
                state+=4;
        }
        else
        {
            int x,y,z;
            cin>>x>>y>>z;
            a[x][y]=z;
        }
    }
    return 0;
}
