import random
n=int(input("Batas = "))
arr=[]
for a in range(0,n):
    r = random.randint(0,20)
    arr.append(r)
    

for a in range(0,n):
    print(arr[a],end=" ")
print()

m=int(input("Data yang mau dicari = "))
yes=False
for a in range(0,n):
    if arr[a]==m:
        print("Ketemu di posisi ke - ",a+1)
        yes=True
if not yes:
    print("Tidak ketemu")
