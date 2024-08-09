t=int(input())
for tc in range(t):
    n=int(input())
    kol=3
    arr=[]
    for b in range(n):
        temp=[]
        x=input().split(' ')
        for k in range(kol):
            x[k]=int(x[k])
            temp.append(x[k])
        arr.append(temp)
    
    memo=[]
    for b in range(n):
        m=[0]*kol
        memo.append(m)
    
    for k in range(kol):
        memo[0][k]=arr[0][k]
    
    for b in range(1,n):
        for k in range(kol):
            if k == 0:
                memo[b][k]=arr[b][k]+min(memo[b-1][k+1],memo[b-1][k+2])
            elif k == kol-1:
                memo[b][k]=arr[b][k]+min(memo[b-1][k-1],memo[b-1][k-2])
            else:
                memo[b][k]=arr[b][k]+min(memo[b-1][k-1],memo[b-1][k+1])
    ans=min(memo[n-1])
    print(ans)
    