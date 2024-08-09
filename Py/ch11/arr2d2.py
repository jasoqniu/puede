import random
bar=random.randint(3,7)
kol=random.randint(3,7)
print("Baris = ",bar)
print("Kolom = ",kol)
catatan=[0]*15

arr = []
for b in range(0,bar):
    temp = []
    for k in range(0,kol):
        temp.append(0)
    arr.append(temp)
    
print("Awal")
for b in range(0,bar):
    for k in range(0,kol):
        r=random.randint(0,9)
        arr[b][k]=r
        print(arr[b][k],end=" ")
    print()

print("Reverse Horizontal")
for b in range(0,bar):
    for k in range(kol-1,-1,-1):
        print(arr[b][k],end=" ")
    print()

print("Reverse Verital")
for b in range(bar-1,-1,-1):
    for k in range(0,kol):
        print(arr[b][k],end=" ")
    print()