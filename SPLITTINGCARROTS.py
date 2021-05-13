n = int(input())
arr = [int(i) for i in input().split()]
sum = 0
chk = [False for i in range(n+10)]

for x in arr:
    sum += x

if (sum % 2 != 0):
    print("0")
    exit()

for i in range(n):
    if arr[i] % 2 != 0:
        print("1")
        print(i)
        exit()

sum2 = int(sum / 2)
arr.sort()

for x in arr:
    chk[x] = True
    for i in reversed(range(x, sum2 + 1)):
        if chk[i - x]:
            chk[i] = True

if (chk[sum2] == False):
    print("0")
    exit()
else:
    while (True):
        for i in range(n):
            if arr[i] % 2 != 0:
                print("1")
                print(i + 1)
                exit()
            arr[i] = int(arr[i] / 2)


    