while(True):
    p,n=input().split(' ')
    p=int(p)
    n=int(n)
    
    if p==0 and n==0:
        break
    
    cash=[0]*(p+5)
    fun=[0]*(n+5)
    for x in range(1,n+1):
        c,f=input().split(' ')
        c=int(c)
        f=int(f)
        cash[x]=c
        fun[x]=f

    memo=[]
    for x in range(n+1):
        temp=[]
        for y in range(p+1):
            temp.append(0)
        memo.append(temp)

    sumcash=0
    sumfun=0
    anscash=0
    ansfun=0

    for b in range(1,n+1):
        for k in range(p+1):
            if cash[b]>k:
                memo[b][k]=memo[b-1][k]
            else:
                skip=memo[b-1][k]
                sisa=k-cash[b]
                beli=fun[b]+memo[b-1][sisa]
                memo[b][k]=max(skip,beli)
            sumfun=memo[b][k]
            sumcash=k
            if sumfun>ansfun:
                ansfun=sumfun
                anscash=sumcash
            elif sumfun==ansfun:
                anscash=min(anscash,sumcash)
    print(anscash,ansfun)
                