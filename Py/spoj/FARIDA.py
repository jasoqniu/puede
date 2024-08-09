t = int(input())
for tc in range(t):
    n = int(input())
    arr=[]*n
    p=input().split()
    for x in p:
        arr.append(int(x))
    m=n+5
    arr1=[0]*m
    arr1[0]=arr[0]
    arr1[1]=max(arr[0],arr1[0])
    for x in range(2,n):
        arr1[x]=max(arr[x-1],arr1[x-2]+arr[x])
    #print(arr1)
    print(f"Case {tc}: {arr1[n-1]}")