n = int(raw_input())
if n%2!=0:
    print("Weird")
elif n%2==0:
    if n in range(2,5):
        print("Not Weird")
    elif n>=6 and n<=20:
        print("Weird")
    if n>20:
        print("Not Weird")
