s=input("Kalimat = ")
ls=len(s)
arr=[0]*26
for c in range(0,ls):
    arr[ord(s[c])-97]+=1

for a in range(0,26):
    print(chr(a+97)+"="+str(arr[a]))