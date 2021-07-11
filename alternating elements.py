'''Given an array of integers, sort the array into a wave like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....
Ex:- [1, 2, 3, 4]
possible answers : [2, 1, 4, 3] ,  [4, 1, 3, 2].print lexicographically smallest'''

n=int(input())
l=list(map(int,input().split()))
l.sort()
for i in range(0,len(l)-1,2):
    l[i],l[i+1]=l[i+1],l[i]
for i in l:
    print(i,end=" ")