s1=input("Kata 1 = ")
s2=input("Kata 2 = ")
ls1=len(s1)
ls2=len(s2)

arr1=[0]*26
arr2=[0]*26
 
ana=True

for c in range(0,ls1):
    arr1[ord(s1[c])-97]+=1
for c in range(0,ls2):
    arr2[ord(s2[c])-97]+=1
for a in range(0,26):
    if arr1[a]!=arr2[a]:
        ana=False

if(ana):
    print("Anagram")
else:
    print("Bukan anagram")