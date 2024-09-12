import random
letters=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
numbers=['0','1','2','3','4','5','6','7','8','9']
symbols=['!','#','$','%','(',')','*','+']
print("Welcome to the pypassword Generator")
num_letters=int(input("How many letters would you like in your password?\n"))
num_symbols=int(input(f"How many symbols would you like?\n"))
num_numbers=int(input(f"How many numbers would you like?\n"))
count=0
pep=0
total=""
for letter in letters:
    if count<num_letters:
        let = random.randint(0, 25)
        total+=letters[let]
        count += 1
count=0
for symbol in symbols:
        if count < num_numbers:
            sym = random.randint(0, 7)
            total += symbols[sym]
            count += 1
count=0
for number in numbers:
        if count < num_symbols:
            num = random.randint(0, 9)
            total += numbers[num]
            count += 1
print(total)



