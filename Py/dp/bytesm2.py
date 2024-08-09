t=int(input())
for tc in range(t):
    bar,kol=input().split(' ')
    bar=int(bar)
    kol=int(kol)

    arr=[]
    for b in range(0,bar):
        temp = []
        for k in range(0,kol):
            temp.append(0)
        arr.append(temp)

    for b in range(0,bar):
        for k in range(0,kol):
            arr[b][k]=int(input())

    memo=[]
    for b in range(0,bar):
        temp = []
        for k in range(0,kol):
            temp.append(0)
        memo.append(temp)

    for k in range(kol):
        memo[0][k]=arr[0][k]

    for b in range(1,bar):
        for k in range(kol):
            if k==0:
                memo[b][k]=arr[b][k]+max(memo[b-1][k],memo[b-1][k+1])
            elif k==kol-1:
                memo[b][k]=arr[b][k]+max(memo[b-1][k],memo[b-1][k-1])
            else:
                memo[b][k]=max(memo[b-1][k-1],memo[b-1][k+1])

    ans=max(ans,memo[bar-1])
    print(ans)
        