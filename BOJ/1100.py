grid = [list(input()) for _ in range(8)]
cnt = 0

for i in range(8):
    for j in range(4):
        if i % 2 == 0:
            if grid[i][j*2]=='F':
                cnt += 1
        else:
            if grid[i][j*2+1]=='F':
                cnt+=1

#print(grid)
print(cnt)
