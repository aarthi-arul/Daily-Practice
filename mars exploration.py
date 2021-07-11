'''Expected signal: SOSSOSSOSSOS
Recieved signal: SOSSPSSQSSOR
Difference:          X  X   X
print the difference output=3'''

#!/bin/python3
import math
import os
import random
import re
import sys

def marsExploration(s):
    count=0
    data=len(s)/3
    word="SOS"*int(data)
    for i in range(len(s)):
        if(s[i]!=word[i]):
            count+=1
    return count
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    result = marsExploration(s)
    fptr.write(str(result) + '\n')
    fptr.close()
