t=int(input())
for tc in range(t):
    n,q=input().split(' ')
    n=int(n)
    q=int(q)
    
    arr=[]
    memo=[]
    p=input().split(' ')
    for o in p:
        arr.append(int(o))
    #print(arr)
    
    memo.append(1)
    for x in range(1,n):
        if arr[x]!=arr[x-1]:
            memo.append(memo[x-1]+1)
        else:
            memo.append(memo[x-1])
    #print(memo)

    ans=0
    for x in range(q):
        i,j=input().split(' ')
        i=int(i)
        j=int(j)
        ans=memo[j-1]-memo[i-1]+1
        print("Case",tc+1,":",ans,sep=' ')