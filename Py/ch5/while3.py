n = int(input("Batas = "))
digit = 0
while int(n)>0:
    digit = digit+1
    n = n/10
print("Jumlah digit dari input = ",digit)