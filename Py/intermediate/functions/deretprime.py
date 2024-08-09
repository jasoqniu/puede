def isPrime(n):
    if n>1:
        for a in range(2,n):
            if(n%a==0):
                return False
        else:
            return True

n = int(input())

x=0
num=0
sum=0
while(x<n):
    if(isPrime(num)):
        if x!=n-1:
            print(num,"+ ",sep=" ",end="")
        else: 
            print(num,"= ",sep=" ",end="")
        sum=sum+num
        x+=1
    num+=1
print(sum)
    