set1 = {"a", "b", "c"}
set2 = {1, 2, 3}
setbaru = set1.union(set2) #


print(setbaru)

set3 = {"John", "Elena"}
set4 = {"apple", "bananas", "cherry"}
setbaru2 = set1.union(set2, set3, set4)
print(setbaru2)

setbaru3 = set1 | set2 | set3 |set4 #bisa menggunakan karakter PIPE untuk menggantikan union
print(setbaru3)
