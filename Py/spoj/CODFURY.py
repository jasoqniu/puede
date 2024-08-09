t=int(input())
for tc in range(t):
    n,m=input().split(' ')
    n=int(n)
    m=int(m)
    arr=[]
    p=input().split(' ')
    for q in p:
        arr.append(int(q))
    
    sumbot=0
    sumplan=0
    ansbot=0
    ansplan=0
    close=0
    for open in range(n):
        sumbot+=arr[open]
        sumplan+=1
        while(sumbot>m):
            sumbot=sumbot-arr[close]
            close+=1
            sumplan=sumplan-1
        if(sumplan>ansplan):
            ansplan=sumplan
            ansbot=sumbot
        elif(ansplan==sumplan):
            ansbot=min(ansbot,sumbot)
    print(ansbot,ansplan)