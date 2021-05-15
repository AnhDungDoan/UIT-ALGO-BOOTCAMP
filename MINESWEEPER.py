
def ins(x, y):
    if (x >= 0 and y >= 0 and x < n and y < m):
        exit(True)
    else:
        exit(False)

def fill(x, y, c):
    for i in range(3):
        tx = x + dx[i]
        ty = y + dy[i]
        if (ins(tx, ty) and b[x][y] != -1):
            c = c - 1

    if c == 1:
        for i in range(3):
            tx = x + dx[i]
            ty = y + dy[i]
            if b[tx][ty] == -1:
                b[tx][ty] = 1
                fill()
                

n, m = [int(x) for x in input().split()]

a = []
b = [[int(-1) for i in range(n)], int(-1) for j in range(m)]
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]
for i in range(n):
    arr = [int(x) for x in input().split()]
    a.append(arr)

for i in range(n):
    for j in range(m):
        if a[i][j] == 0:
            for k in range(4):
                ti = i + dx[k]
                tj = j + dy[k]
                if ins(ti, tj):
                    b[ti][tj] = 0
        elif a[i][j] == 4:
            for k in range(4):
                ti = i + dx[k]
                tj = j + dy[k]
                if ins(ti, tj):
                    b[ti][tj] = 1
fill(1,1,a[i][j])

