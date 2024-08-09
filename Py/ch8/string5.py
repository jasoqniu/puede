s=input("Kalimat = ")
ls=len(s)
pal=True
for c in range(0,ls//2):
    if s[c]!=s[ls-1-c]:
        pal=False
        break
if(pal):
    print("Palindrom")
else:
    print("Bukan palindrom")