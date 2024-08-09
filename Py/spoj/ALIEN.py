t=int(input())
for tc in range(t):
    n,m=input().split(' ')
    n=int(n)
    m=int(m)
    
    arr=[]
    p=input().split(' ')
    for q in p:
        arr.append(int(q))
    
    sumhum=0
    sumtrain=0
    anshum=0
    anstrain=0
    close=0
    for open in range(n):
        sumhum+=arr[open]
        sumtrain+=1
        while(sumhum>m):
            sumhum=sumhum-arr[close]
            close+=1
            sumtrain=sumtrain-1
        if(sumtrain>anstrain):
            anstrain=sumtrain
            anshum=sumhum
        elif(sumtrain==anstrain):
            anshum=min(anshum,sumhum)
    
    print(anshum,anstrain)