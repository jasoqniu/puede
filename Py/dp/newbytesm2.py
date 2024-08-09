t=int(input())
for tc in range(t):
    bar,kol=input().split(' ')
    bar=int(bar)
    kol=int(kol)
    
    arr=[]
    #for b in range(bar):
    #    n=list(map(int,input().split(' ')))
    #    arr.append(n)
    #for x in arr:
    #    print(x)
    
    for b in range(bar):
        temp=[]
        x=input().split(' ')
        for k in range(kol):
            x[k]=int(x[k])
            temp.append(x[k])
        arr.append(temp)
    #print()
    #for b in range(bar):
    #    for k in range(kol):
    #        print(arr[b][k],end=' ')
    #    print()
            
    memo=[]
    for b in range(bar):
        m=[0]*kol
        memo.append(m)
    #for x in memo:
    #    print(x)
    
    for k in range(kol):
        memo[0][k] = arr[0][k]
    
    for b in range(1,bar):
        for k in range(kol):
            if k == 0:
                memo[b][k]=arr[b][k]+max(memo[b-1][k],memo[b-1][k+1])
            elif k == kol-1:
                memo[b][k]=arr[b][k]+max(memo[b-1][k],memo[b-1][k-1])
            else:
                memo[b][k]=arr[b][k]+max(memo[b-1][k-1],memo[b-1][k],memo[b-1][k+1])
    
    ans = max(memo[bar-1])
    print(ans)
