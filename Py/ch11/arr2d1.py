import random
bar=random.randint(3,7)
kol=random.randint(3,7)
print("Baris = ",bar)
print("Kolom = ",kol)
catatan=[0]*25

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
        catatan[r]+=1
    print()
 
catatan2 = [0]*25
print("Kembar:")   
for b in range(0,bar):
    for k in range(0,kol):
        n=arr[b][k]
        if catatan[n]>1 and catatan2[n]!=1:
            print(n,":",catatan[n],"x")
            catatan2[n]=1