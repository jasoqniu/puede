n=int(input("Batas = "))

m=n+n-1
for b in range(1,m+1):
    for k in range(1,m+1):
        if b+k==n+1 or b+k==n+m or k-b==n-1 or b-k==n-1:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()