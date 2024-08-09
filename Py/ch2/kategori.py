n=int(input("Usia = "))
if n<=4 and n>=0:
    print("Balita")
elif n>=5 and n<=12:
    print("Anak")
elif n>=13 and n<=19:
    print("Remaja")
elif n>=20 and n<=59:
    print("Dewasa")
else:
    print("Lansai")