n,m=input().split(' ')
n=int(n)
m=int(m)
arr=[]
p=input().split(' ')
for q in p:
    arr.append(int(q))
sum=0
close=0
ans=0
for open in range(n):
    sum=sum+arr[open]
    while(sum>m):
        sum=sum-arr[close]
        close+=1
    ans=max(ans,sum)
print(ans)
