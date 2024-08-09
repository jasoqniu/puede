n=int(input("Batas = "))

for b in range(1,n+1):
    for k in range(b,0,-1):
        print(k,sep="",end="")
    print("")