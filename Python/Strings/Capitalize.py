#!/bin/python
import math
import os
import random
import re
import sys

def solve(s):
    for x in s.split():
        s = s.replace(x, x.capitalize(), 1)
    return s
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()