n=int(input("Bilangan = "))

num=0
prime=False
print("Faktornya : ")
for x in range(1,n+1):
    if n%x ==0:
        print(x,end=" ")
        num+=1
print(" ")
print("Jumlah faktornya = ",num)

if(num==2):
    print("Prima")
else:
    print("Bukan prima")

    
