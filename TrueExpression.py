arr = [int(i) for i in input().split()]
n, s = arr[0], arr[1]
ans = [' ' for i in range(n+10)]

if s > n*(n + 1)/2:
    print("NO_SOLUTION")
elif (s - (n*(n + 1)/2)) % 2 != 0:
    print("NO_SOLUTION")
else:
    for i in range(1, n+1):
        ans[i] = '+'
    sum = 0
    pres = ((n*(n + 1)/2) - s) /2
    for i in range(1, n+1):
        sum += i
        if sum > pres:
            for j in range(1, i+1):
                if j != sum - pres:
                    ans[j] = '-'
            break

    for i in range(1, n+1):
        print(ans[i], end = "")


