bar,kol=input().split(' ')
bar=int(bar)
kol=int(kol)

arr=[]
for b in range(bar):
    temp=[]
    x=input().split(' ')
    for k in range(kol):
        x[k]=int(x[k])
        temp.append(x[k])
    arr.append(temp)

memo=[]
for b in range(bar):
    m=[0]*kol
    memo.append(m)

for k in range(kol):
    memo[0][k] = arr[0][k]
for b in range(1,bar):
    for k in range(kol):
        if k == 0:
            memo[b][k]=arr[b][k]+min(memo[b-1][k],memo[b-1][k+1])
        elif k == kol-1:
            memo[b][k]=arr[b][k]+min(memo[b-1][k],memo[b-1][k-1])
        else:
            memo[b][k]=arr[b][k]+min(memo[b-1][k-1],memo[b-1][k],memo[b-1][k+1])
    
ans = min(memo[bar-1])
print(ans)

