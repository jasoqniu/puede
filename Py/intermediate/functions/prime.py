def isPrime(n):
    if n>1:
        for a in range(2,n):
            if(n%a==0):
                return False
        else:
            return True

n = int(input())
if( isPrime(n) ) :
    print("Prime")
else:
    print("Not Prime")