import random
n=int(input("Batas = "))
arr=[]
max=0
min=21
sum=0
for a in range(0,n):
    r = random.randint(0,20)
    arr.append(r)
    
    if(arr[a]>max):
        max=arr[a]
    
    if(arr[a]<min):
        min=arr[a]
        
    sum=sum+arr[a]

for a in range(0,n):
    print(arr[a],end=" ")


avg = sum/n
print()
print("Max = ", max)
print("Min = ", min)
print("Rata-rata = ",avg)

