'''First line of the input contains n and k delimited by whitespace
Second line contains the Array A (modifiable array) with its values delimited by spaces
Third line contains the Array B (non-modifiable array) with its values delimited by spaces
to find the sum of Products of corresponding elements of two arrays of the same size.
Hint : try to use all the k operations on any single element of the modifiable array a'''

n,k=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
res,diff=0,0
for i in range(n):
    pro=a[i]*b[i]
    res+=pro
    if(pro<0 and b[i]<0):
        temp=(a[i]+2*k)*b[i]
    elif(pro<0 and a[i]<0):
        temp=(a[i]-2*k)*b[i]
    elif(pro>0 and a[i]<0):
        temp=(a[i]+2*k)*b[i]
    elif(pro>0 and a[i]>0):
        temp=(a[i]-2*k)*b[i]
    d=abs(pro-temp)
    if(d>diff):
        diff=d
print(res-diff)