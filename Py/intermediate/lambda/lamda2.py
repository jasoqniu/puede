filter_genap=lambda x:x%2==0
terfilter = filter(filter_genap,range(0,11))
print(list(terfilter))