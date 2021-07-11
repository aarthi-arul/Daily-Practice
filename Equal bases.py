'''Given a decimal number N, you need to find the number of bases 1 < b <= n such that when the number N is represented in base 'b', it ends in a zero.
Output one number, the number of bases b such that when number N is represented in base b, the number contains a trailing zero.'''
n=int(input())
count=0
for i in range(2,n+1):
    if(n%i==0):
        count+=1
print(count)