s=input("Pesan Rahasia = ")
ls = len(s)
kode=int(input("Kode = "))
s2 =""
for c in s:
    if c==" ":
        s2+=c
    elif ord(c)+kode>=123:
        s2+=chr(ord(c)-26+kode)
        
    else:
        s2+=chr(ord(c)+kode)
print("Hasil enkripsi =",s2)