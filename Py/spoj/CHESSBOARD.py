n=int(input())
bar=n
kol=n
arr=[]
for b in range(n):
    temp=[]
    x=input().split(' ')
    for k in range(n):
        x[k]=int(x[k])
        temp.append(x[k])
    arr.append(temp)
#print(arr)
q=int(input())
for a in range(q):
    q1,q2,q3,q4=input().split(' ')
    q1=int(q1)
    q2=int(q2)
    q3=int(q3)
    q4=int(q4)
    
    ans=0
    hitam=0
    putih=0
    for b in range(q1-1,q3):
        for k in range(q2-1,q4):
            if (b+k)%2==0:
                hitam+=arr[b][k]
            else:
                putih+=arr[b][k]
    ans=abs(hitam-putih)
    print(ans)