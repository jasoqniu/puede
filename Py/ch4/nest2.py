n=int(input("Batas = "))
for bar in range(1,n+1):
    for kol in range(1,n+1):
        print(kol,sep="",end="")
    n=n-1
    print("")