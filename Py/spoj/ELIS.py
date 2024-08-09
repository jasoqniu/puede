n=int(input())
arr=[]
m=input().split(' ')
for x in m:
    arr.append(int(x))
memo=[1]*n
for jim in range(1,n):
    for pue in range(jim):
        if arr[jim]>arr[pue]:
            memo[jim]=max(memo[jim],memo[pue]+1)
print(max(memo))