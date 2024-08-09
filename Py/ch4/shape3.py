n=int(input("Batas = "))
for b in range(1,n+1):
    for k in range(1,n+1):
        if b==n or k==1 or k==b:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()