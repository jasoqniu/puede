def ribuan(x):
    for a in range(x):
        print("M",end="")

def ratusan(x):
    if x==9:
        print("CM",end="")
    elif x==4:
        print("CD",end="")
    elif x>=5 and x<=8:
        print("D",end="")
        for a in range(x-5):
            print("C",end="")
    else:
        for a in range(x):
            print("C",end="")

def puluhan(x):
    if x==9:
        print("XC",end="")
    elif x==4:
        print("XL",end="")
    elif x>=5 and x<=8:
        print("L",end="")
        for a in range(x-5):
            print("X",end="")
    else:
        for a in range(x):
            print("X",end="")

def satuan(x):
    if x==9:
        print("IX",end="")
    elif x==4:
        print("IV",end="")
    elif x>=5 and x <=8:
        print("V", end="")
        for a in range(x-5):
            print("I",end="")
    else:
        for a in range(x):
            print("I",end="")

n=int(input("Bilangan =  "))
ribuan(n // 1000)
ratusan((n % 1000) // 100)
puluhan((n % 100) // 10)
satuan(n % 10)
