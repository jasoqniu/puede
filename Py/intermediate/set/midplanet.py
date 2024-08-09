def prime(x):
    if x>1:
        for a in range(2,x):
            if(x%a==0):
                return False
        else:
            return True

n=int(input("in = "))
mapstr={}
mapint={}
index=1

for a in range(0,n):
    #s1=str(input())
    #=str(input())
    s1,s2=input().split(' ')
    
    if s1 not in mapint:
        mapint[s1]=index
        mapstr[index]=s1
        index+=1
    if s2 not in mapint:
        mapint[s2]=index
        mapstr[index]=s2
        index+=1

planet=index-1
mid=(planet+1)//2
print(mapstr[mid],"-",end=" ")
if prime(mid):
    print(mapstr[planet])
else:
    print(mapstr[1])

    