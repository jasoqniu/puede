n=int(input("Batas = "))
num=1
for b in range(1,n+1):
    for k in range(b,0,-1):
        print(num,sep="",end="")
        num+=1
    print("")