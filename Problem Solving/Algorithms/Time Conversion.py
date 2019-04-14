#!/bin/python

from __future__ import print_function

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    ans=""
    mm=s[8: ]
    s = s[:-2]
    lst=map(int,s.split(':'))
    if (mm=="PM" and lst[0]!=12):
        lst[0]=lst[0]+12
    if (mm=="AM" and lst[0]==12):
        lst[0]=0   
    ans+=str(lst[0]).zfill(2)+':'+str(lst[1]).zfill(2)+':'+str(lst[2]).zfill(2)
    return ans

    #
    # Write your code here.
    #

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
