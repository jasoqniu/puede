n=int(input())
arr=[]
p=input().split(' ')
for q in p:
    arr.append(int(q))
k=int(input())
for x in range(n-k+1):
    ans=0
    for y in range(k):
        ans=max(ans,arr[x+y])
    print(ans,end=" ")