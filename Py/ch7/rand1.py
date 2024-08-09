import random
n=int(input("Batas = "))
arr = []
for x in range (1,n+1):
    r = random.randint(0,20)
    arr.append(r)
print(arr)

print("Reverse")
for y in range(n-1,0,-1):
    print(arr[y],end=" ")
