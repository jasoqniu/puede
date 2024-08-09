n=int(input("Bilangan = "))
rib=n//1000
n=n%1000
rat=n//100
n=n%100
pul=n//10
n=n%10
sat=n//1

print("Ribuan = ",rib)
print("Ratusan = ",rat)
print("Puluhan = ",pul)
print("Satuan = ",sat)