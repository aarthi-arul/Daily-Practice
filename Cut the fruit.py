'''The first (and the only) input line contains integer number w — the weight of the watermelon bought by them.
Print YES, if they can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.'''
w=int(input())
if(w%2==0):
    if(w==2):
        print("NO")
    else:
        print("YES")
else:
    print("NO")