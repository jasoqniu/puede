word ={}
while True:
    ind = str(input("Masukkan kata dalam bahasa indonesia = "))
    if ind=="keluar" or "KELUAR":
        break
    elif ind not in word:
        print("Kata"+ind+"tidak ditemukan")
        yt=str(input(("Apakah ingin benambahkan ke dalam kamus? (y/t)")))
        if yt=="y":
            eng=str(input("Masukkan kata inggris dari kata  ",ind,end=" = "))
            word[ind]=eng
            print("Data berhasil di simpan")
        elif yt=="t":
            break
    else:
        eng=word[ind]
        print("Dalam bahasa inggris = ",eng)