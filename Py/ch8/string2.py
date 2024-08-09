s=input("Masukkan kalimat = ")
ls=len(s)
word=1
for a in range(0,ls):
    if s[a]==" ":
        word+=1
print("Jumlah kata = ",word)