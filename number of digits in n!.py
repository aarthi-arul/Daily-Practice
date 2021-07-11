#Output one number that is equal to the number of digits in N!

n=int(input())
fact=1
count=0
for i in range(1,n+1):
    fact*=i
while(fact>0):
    count+=1
    fact//=10
print(count)