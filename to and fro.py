'''First line contains total number of test cases, denoted by N Next N lines, contain a tuple containing 4 values delimited by space F B T D, where 1. F denotes forward displacement in meters 2. B denotes backward displacement in meters 3. T denotes time taken to cover 1 meter 4. D denotes distance from Car's starting position and the wall in backward direction.
For each test case print time taken by the Car to hit the wall'''
num=int(input())
for test in range(num):
    f,b,t,d=[int(i) for i in input().split()]
    c=0
    while(b<d):
        c=c+f+b
        d=d-b+f
        
    c=c+d
    print(c*t)
    