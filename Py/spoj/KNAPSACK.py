s,n=input().split(' ')
s=int(s)
n=int(n)

cash=[0]*(n+5)
item=[0]*(n+5)

for x in range(1,n+1):
    c,i=input().split(' ')
    c=int(c)
    i=int(i)
    cash[x]=c
    item[x]=i

arr=[]
for x in range(n+1):
    temp=[]
    for y in range(s+1):
        temp.append(0)
    arr.append(temp)

for b in range(1,n+1):
    for k in range(s+1):
        if cash[b]>k:
            arr[b][k]=arr[b-1][k]
        else:
            skip=arr[b-1][k]
            sisauang=k-cash[b]
            beli=item[b]+arr[b-1][sisauang]
            arr[b][k]=max(skip,beli)
ans=arr[n][s]
print(ans)