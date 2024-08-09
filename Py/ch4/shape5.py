n=int(input("Batas = "))
for b in range(1,n+1):
    for k in range(n,0,-1):
        if k<=b:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()