t = int(input())
for a in range(0,t):
    #n=int(input())
    #m=int(input())
    #D=int(input())
    #inp=input().split()
    #n=int(inp[0])
    #m=int(inp[1])
    #D=int(inp[2])
    n,m,D=input().split(' ')
    n = int(n)
    m = int(m)
    D = int(D)
    arr=[]
    for b in range(0,n):
        h=int(input())
        arr.append(h)   
    
    for x in range(0,n):
        for y in range(0,n-x-1):
            if arr[y] < arr[y+1]:
                arr[y],arr[y+1]=arr[y+1],arr[y]
            
    tower=0
    while arr:
        top=arr[0]
        if top>D:
            top=top-D
            tower+=1
            arr[0]=top
            
            for x in range(0,n-1):
                for y in range(0,n-x-1):
                    if arr[y] < arr[y+1]:
                        arr[y],arr[y+1]=arr[y+1],arr[y]
                    else:
                        break
        else:
            break
        
    if tower>=m:
        print("YES\n")
    else:
        print("NO\n")
    