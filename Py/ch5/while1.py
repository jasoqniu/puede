print("Menu")
print("1.Food")
print("2.Beverage")
run = True
while(run==True):
    print("Choose:")
    inp=int(input())
    if inp == 1 or inp == 2:
        run = False
        if inp==1:
            print("Food is on the way")
        else:
            print("Beverage on the way")
    else:
        print("Wrong Choice")