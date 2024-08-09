run=True
while(run==True):
    n=int(input("Masukkan angka ganjil = "))
    if n%2==0:
        print("Salah!")
    else:
        for b in range(1,n+1):
            for k in range(1,n+1):
                if b==1 or b==n or k==int(n/2+1):
                    print("*",end=" ")
                else:
                    print(" ",end=" ")
            print()
        run=False
