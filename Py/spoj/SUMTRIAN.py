t=int(input())
for tc in range(t):
    n=int(input())
    
    arr=[]
    for b in range(n):
        temp=[]
        x=input().split(' ')
        for k in range(b):
            x[k]=int(x[k])
            temp.append(x[k])
        arr.append(temp)
    
    memo=[]
    for x in range(n):
        temp=[]
        for y in range(n):
            temp.append(0)
        memo.append(temp)
        
    memo[0][0]=arr[0][0]
    
    for b in range(1,n):
        for k in range(b+1):
            if k==0:
                memo[b][k]=arr[b][k]+memo[b-1][k]
            elif k==b:
                memo[b][k]=arr[b][k]+memo[b-1][k-1]
            else:
                memo[b][k]=arr[b][k]+max(memo[b-1][k],memo[b-1][k-1])
    ans=0
    for k in range(n):
        ans=max(ans,memo[n-1][k])
    ans=max(memo[n-1])
    print(ans)