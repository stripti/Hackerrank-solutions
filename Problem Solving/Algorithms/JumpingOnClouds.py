#Print the minimum number of jumps needed to win the game.
def foo(num, c):
    if num == 0 or num == 1:
        print(foo.res)
    if num > 1:
        if c[2] == 0:
            foo.res += 1
            foo(num - 2, c[2:])
        elif c[2] == 1:
            foo.res += 1
            foo(num - 1, c[1:])


foo.res = 0

if __name__ == '__main__':
    n = int(input())
    c1 = list(map(int, input().rstrip().split(' ')))
    foo(n, c1)
