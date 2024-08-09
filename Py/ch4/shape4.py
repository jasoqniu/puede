n=int(input("Batas = "))
for b in range(1,n+1):
    for k in range(1,n+1):
        if b==1 or k==b or k==n:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()