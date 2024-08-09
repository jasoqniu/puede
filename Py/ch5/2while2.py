sum=0
while(True):
    n=int(input("Batas = "))
    if(n%3!=0):
        sum = sum+n
    if(n==0):
        break
print("Hasil jumlah bilangan bukan kelipatan 3 = ",sum)