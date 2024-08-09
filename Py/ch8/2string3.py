import random
arr = ["Maroon 5 - Girls like you","Taylow Swift - Delicate","Shawn Mendes - Senorita","Ed Sheeran - I Don't Care"]

for a in range(0,4):
    print (a+1,arr[a])

print("\nShuffled")
arr1 = [0]*5
x=0

while(x<4):
    r = random.randint(0,3)
    if arr1[r]==0:
        print (x+1,".",arr[r])
        arr1[r]=1
        x+=1