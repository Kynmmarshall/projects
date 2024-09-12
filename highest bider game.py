people_bid={}
rerun="yes"
for key in range(0,100):
    if rerun=="yes":
        key=input("what is your name?: ")
        people_bid[key]=input("what's your bid?: $")
        rerun=input("is there a nother person to bid (yes or no)? ").lower()
        print("\n"*100)
print(f"The biggest bid is {max(people_bid.values())} from {max(people_bid,key=people_bid.get)}")
