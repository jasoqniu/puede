t=int(input())
for T in range(0,t):
    bar=int(input())
    kol=int(input())
    
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
    br=1
    kl=1

    end=bar*kol+1
    for n in range(1,end):
        arr[br][kl]=n
        if arah==kanan:
            if kl<kol and arr[br][kl+1]==0:
                kol+=1
            else:
                br+=1
                arah=bawah
        elif arah==bawah:
            if br<bar and arr[bar+1][kl]==0:
                br+=1
            else:
                kl=kl-1
                arah=kiri
        elif arah==kiri:
            if kl<bar and arr[br][kl-1]==0:
                kl=kl-1
            else:
                br=br-1
                arah=atas
        elif arah==atas:
            if br>1 and arr[br-1][kl]==0:
                br=br-1
            else:
                kl+=1
                arah=kanan
    
    print("Case ",T)
    max=bar*kol
    for b in range(0,bar):
        for k in range(0,kol):
            if max>9 and arr[b][k]<9:
                print("0")
                
            print(arr[b][k])
            
            if(k<kol):
                print(" ")
    print()
    