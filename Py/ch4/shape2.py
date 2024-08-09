n = int(input(("Batas = ")))
for b in range (1,n+1):
    for k in range (1,n+1):
        if b==1 or k==1 or b+k==n+1:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()