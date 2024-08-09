def rev(n):
    rv=0
    while(n>0):
        rv = rv*10 + (n%10)
        n=n//10
    return rv

t=int(input())
for a in range(0,t):
    n=int(input())
    m=int(input())


    revn=rev(n)
    revm=rev(m)
    sum = revn + revm
    revsum=rev(sum)
    print(revsum)