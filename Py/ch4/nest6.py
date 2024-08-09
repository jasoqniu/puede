m=int(input("Batas = "))

n=0
for i in range(1,m+1):
    n=n+i

for b in range(1,m+1):
    for k in range(b,0,-1):
        print(n,sep=" ",end=" ")
        n=n-1
    print("")