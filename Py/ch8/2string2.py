arr = ["","satu","dua","tiga","empat","lima","enam","tuju","delapan","sembilan"]
n=int(input("Bilangan = "))
ribuan = n//1000
n = n%1000
ratusan = n//100
n = n%100
puluhan = n//10
n = n%10
satuan = n
print("Ribuan = ",ribuan)
print("Ratusan = ",ratusan)
print("Puluhan = ",puluhan)
print("Satuan = ",satuan)

print("Terbilang = ",end="")
if ribuan==1:
    print("seribu", end=" ")
elif ribuan>1:
    print(arr[ribuan],"ribu",end=" ")
if ratusan==1:
    print("seratus",end=" ")
elif ratusan > 1:
    print(arr[ratusan],"ratus",end=" ")
if puluhan==1:
    if satuan==0:
        print("sepuluh",end=" ")
    if satuan==1:
        print("sebelas",end=" ")
    else:
        print(arr[satuan],"belas",end=" ")
elif puluhan>1:
    print(arr[puluhan],"puluh",end=" ")

if puluhan!=1 and satuan!=0:
    print(arr[satuan], end=" ")