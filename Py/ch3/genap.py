n = int(input("Bilangan = "))
sum = 0
last=False
for x in range(1,n+1):
    if x%2==0 and x==n:
        last=True
        
    elif x%2==0 and x==n-1:
        last=True
    
    if x%2==0 and last==False:
        sum+=x
        print(x,"+ ",end="")
    elif x%2==0 and last==True:
        sum+=x
        print(x,end="")
    
print(" =",sum)