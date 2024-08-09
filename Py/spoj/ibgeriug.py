t = int(input())

for tc in range(t):
    n, q = input().split(' ')
    n = int(n)
    q = int(q)
    
    arr = []
    memo = []
    
    p = input().split(' ')
    for o in p:
        arr.append(int(o))
      
    memo.append(1)  
    for x in range(1,n):
        if arr[x] != arr[x-1]:
            memo.append(memo[x-1] + 1)
        else:
            memo.append(memo[x-1])
            
    ans = []
    for x in range(q):
        i, j = input().split(' ')
        i = int(i)
        j = int(j)
        if i == 1:
            ans.append(memo[j-1])
        else:
            ans.append(memo[j-1]-memo[i-2])
    
    print(ans)