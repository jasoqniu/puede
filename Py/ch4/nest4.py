n=int(input("Batas = "))

for b in range(n,0,-1):
    for k in range(b,n+1):
        print(k,sep="",end="")
    print("")