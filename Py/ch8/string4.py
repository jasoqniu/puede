s = input("Kalimat = ")
ls=len(s)
for c in range(0,ls):
    if 'A'<=s[c]<='Z':
        print('_'+s[c].lower(),end="")
    elif s[c]=='_':
        c+=1
        print(s[c].upper(),end="")
    else:
        print(s[c],end="")
        