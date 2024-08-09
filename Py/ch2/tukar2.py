n1 = int(input("Bilangan 1 = "))
n2 = int(input("Bilangan 2 = "))
if n1%5==0 and n2%5==0:
    n1,n2=n2,n1
    print("Bilangan 1 = ",n1)
    print("Bilangan 2 = ",n2)
else:
    print("NO SWAP")