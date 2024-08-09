t=int(input())
for tc in range(t):
    n,k=input().split(' ')
    n=int(n)
    k=int(k)
    arr=[]
    p=input().split(' ')
    for q in p:
        arr.append(int(q))
        
    for x in range(n-1):
        for y in range(n-1-x):
            if(arr[y]>arr[y+1]):
                arr[y],arr[y+1]=arr[y+1],arr[y]
    
    minh=1000000
    for x in range(n-k+1):
        h=abs(arr[x+k-1]-arr[x])
        minh=min(minh,h)
    print(minh)