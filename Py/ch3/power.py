n1=int(input("Bilangan 1 = "))
n2=int(input("Bilangan 2 = "))
pow=n1
for x in range(1,n2+1):
    pow = pow * n1
print(n1,"^",n2,"=",pow)