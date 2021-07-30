n = int(input())
arr = [int(i) for i in input().split()]
sum = 0
chk = [False for i in range(200000+10)]

for x in arr:
    sum += x

if (sum % 2 != 0):
    print("0")
    exit()

sum2 = int(sum / 2)
#arr.sort()

chk[0] = True
for x in arr:
    if chk[sum2] == True:
        break

    for i in reversed(range(0, sum2 + 1 - x)):
        if chk[i]:
            chk[i + x] = True
            
        if chk[sum2] == True:
            break

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