import random
bar=random.randint(3,7)
kol=random.randint(3,7)
print("Baris = ",bar)
print("Kolom = ",kol)


arr = []
for b in range(0,bar):
    temp = []
    for k in range(0,kol):
        temp.append(0)
    arr.append(temp)

for b in range(0,bar):
    for k in range(kol):
        r=random.randint(1,20)
        arr[b][k]=r
        print(arr[b][k],end=" ")
    print()

catatan=[0]*25
print("Genap")
for b in range(0,bar):
    for k in range(0,kol):
        n=arr[b][k]
        if n%2==0 and catatan[n]==0:
            print(n,end=" ")
            catatan[n]+=1
print()  
print("Ganjil")
for b in range(0,bar):
    for k in range(0,kol):
        n=arr[b][k]
        if n%2==1 and catatan[n]==0:
            print(n,end=" ")
            catatan[n]+=1

