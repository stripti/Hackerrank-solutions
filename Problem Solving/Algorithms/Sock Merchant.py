#!/bin/python3


# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    pair_count = 0
    socks = {}
    for i in range(0, n):
        socks[ar[i]] = 0
    for i in range(0, n):
        if socks.get(ar[i]) == 1:
            socks[ar[i]] = 0
            pair_count = pair_count + 1
        else:
            socks[ar[i]] = 1
    return pair_count


if __name__ == '__main__':
    n = int(input())
    ar = list(map(int, input().rstrip().split()))
    result = sockMerchant(n, ar)
    print(result)
