t = int(input())
for T in range(t):
    #bar = int(input())
    #kol = int(input())
    bar, kol = input().split()
    bar = int(bar)
    kol = int(kol)
    
    arr = []
    for b in range(0,bar):
        temp = []
        for k in range(0,kol):
            temp.append(0)
        arr.append(temp)
    
    for b in range(0,bar):
        for k in range(0,kol):
            arr[b][k]=0
    
    atas=1
    kiri=2
    kanan=3
    bawah=4
    
    arah=kanan
    br=0
    kl=0
    n=1
    
    while n <=bar*kol:
        arr[br][kl]=n
        if arah==kanan:
            if kl+1< kol and arr[br][kl+1]==0:
                kl+=1
            else:
                br+=1
                arah=bawah
        elif arah==bawah:
            if br+1< bar and arr[br+1][kl]==0:
                br+=1
            else:
                kl-=1
                arah=kiri
        elif arah==kiri:
            if kl-1>=0 and arr[br][kl-1]==0:
                kl-=1
            else:
                br-=1
                arah=atas
        elif arah == atas:
            if br-1>=0 and arr[br-1][kl]==0:
                br-=1
            else:
                kl+=1
                arah=kanan
        n += 1
    
    print("Case ",T+1,":",sep="")
    max = bar * kol
    for b in range(bar):
        for k in range(kol):
            if max > 9 and arr[b][k]<10:
                print("0", end="")
            print(arr[b][k], end="")
            if k<kol-1:
                print(" ", end="")
        print()
