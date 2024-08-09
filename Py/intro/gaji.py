gaji=int(input("Gaji = "))
seratus=0
lpuluh=0
dpuluh=0
spuluh=0
lima=0
dua=0
satu=0

seratus = gaji//100000
gaji = gaji%100000
lpuluh = gaji//50000
gaji = gaji%50000
dpuluh = gaji//20000
gaji = gaji%20000
spuluh = gaji//10000
gaji = gaji%10000
lima = gaji//5000
gaji = gaji%5000
dua = gaji//2000
gaji = gaji%2000
satu = gaji//1000


print("100.000 = ",seratus,"lembar")
print("50.000 = ",lpuluh,"lembar")
print("20.000 = ",dpuluh,"lembar")
print("10.000 = ",spuluh,"lembar")
print("5.000 = ",lima,"lembar")
print("2.000 = ",dua,"lembar")
print("1.000 = ",satu,"lembar")


