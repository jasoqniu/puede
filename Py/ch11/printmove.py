bar,kol=input().split(' ')
bar=int(bar)
kol= int(kol)

n=1
max=bar*kol
arr = []
for b in range(0,bar):
    temp = []
    for k in range(0,kol):
        temp.append(0)
    arr.append(temp)

for b in range(0,bar):
    for k in range(0,kol):
        arr[b][k]=n
        n+=1
        
for b in range(0,bar):
    for k in range(0,kol):
        n=arr[b][k]
        if max>999 and max<1000:
            print("0")
        elif max>99 and max<100:
            print("0")
        elif max>9 and max<10:
            print("0")
        print(n)
        if k<kol:
            print(" ")
        
t=int(input())
for a in range(0,t):
    s=int(input())
    if s=="up":
        temp =[]
        for k in range(0,kol):
            temp[k]=arr[1][k]
        for b in range(1,bar):
            for k in range(0,k):
                arr[b-2][k]=arr[b][k]
        for k in range(0,kol):
            arr[bar][k]=temp[k]