import random
count=random.randint(0,1)
print(count)
choice=input("what do you choose head (h) or tail(t)?")
print(choice)
if count==1:
    print("Head")
elif count==0:
    print("tail")

