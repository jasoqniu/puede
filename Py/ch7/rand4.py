import random
n=int(input("Batas = "))
arr1=[]
arr2=[]

for a in range(0,21):
    arr1.append(0)


a=0
while a<n:
    r=random.randint(1,20)
    if arr1[r]==0:
        arr2.append(r)
        print(arr2[a],end=" ")
        arr1[r]=1
        a+=1
