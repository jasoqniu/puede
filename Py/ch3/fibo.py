n=int(input("Batas = "))
s=1
sb=0
b=0
sum=0
for x in range(1,n+1):
    if(x!=n):
        print(s,"+ ",end="")
    else:
        print(s,end=" ")
    sum+=s
    b=sb+s
    sb = s
    s = b
print("=",sum)
    