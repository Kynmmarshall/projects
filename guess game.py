import random
word_list=["aardvark","baboon","camel","ghost"]
index=random.randint(0,3)
chosen_word=word_list[index]
#print(chosen_word)
blank=""
for letters in chosen_word:
    blank+="_"
print(blank)
blank=""
correct_letters=[]
live=6
print(f"live= {live}")
while blank!=chosen_word and live!=0:
    guess = input("Guess a letter: ").lower()
    blank=""
    for letters in chosen_word:
        if guess == letters:
           blank+=guess
           correct_letters.append(guess)
        elif letters in correct_letters:
           blank+=letters
        else:
           blank+="_"
    print(blank)
    if guess not in chosen_word:
        live-=1
    print(f"live= {live}")
if "_" not in blank:
    print("you win")
if live==0:
    print("GAME OVER YOU FAILED")
