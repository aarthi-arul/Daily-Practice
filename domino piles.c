/*rectangular board of M × N squares,given domino pieces of 2 × 1 squares.allowed to rotate the pieces.to place as many dominoes as possible on the board to meet the following conditions:
Each domino completely covers two squares,no two domi,overlap,lies entirely inside the board(edges).Find the maximum number of dominoes*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n,f;
    scanf("%d %d",&m,&n);
    f=m/2*n + m%2*n/2 ;
    printf("%d",f);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
