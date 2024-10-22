import random
print("""
██ ▄█▀▓██   ██▓ ███▄    █  ███▄ ▄███▓       ▄▄▄▄    ██▓    ▄▄▄       ▄████▄   ██ ▄█▀▄▄▄██▀▀▀▄▄▄       ▄████▄   ██ ▄█▀
 ██▄█▒  ▒██  ██▒ ██ ▀█   █ ▓██▒▀█▀ ██▒      ▓█████▄ ▓██▒   ▒████▄    ▒██▀ ▀█   ██▄█▒   ▒██  ▒████▄    ▒██▀ ▀█   ██▄█▒ 
▓███▄░   ▒██ ██░▓██  ▀█ ██▒▓██    ▓██░      ▒██▒ ▄██▒██░   ▒██  ▀█▄  ▒▓█    ▄ ▓███▄░   ░██  ▒██  ▀█▄  ▒▓█    ▄ ▓███▄░ 
▓██ █▄   ░ ▐██▓░▓██▒  ▐▌██▒▒██    ▒██       ▒██░█▀  ▒██░   ░██▄▄▄▄██ ▒▓▓▄ ▄██▒▓██ █▄▓██▄██▓ ░██▄▄▄▄██ ▒▓▓▄ ▄██▒▓██ █▄ 
▒██▒ █▄  ░ ██▒▓░▒██░   ▓██░▒██▒   ░██▒      ░▓█  ▀█▓░██████▒▓█   ▓██▒▒ ▓███▀ ░▒██▒ █▄▓███▒   ▓█   ▓██▒▒ ▓███▀ ░▒██▒ █▄
▒ ▒▒ ▓▒   ██▒▒▒ ░ ▒░   ▒ ▒ ░ ▒░   ░  ░      ░▒▓███▀▒░ ▒░▓  ░▒▒   ▓▒█░░ ░▒ ▒  ░▒ ▒▒ ▓▒▒▓▒▒░   ▒▒   ▓▒█░░ ░▒ ▒  ░▒ ▒▒ ▓▒
░ ░▒ ▒░ ▓██ ░▒░ ░ ░░   ░ ▒░░  ░      ░      ▒░▒   ░ ░ ░ ▒  ░ ▒   ▒▒ ░  ░  ▒   ░ ░▒ ▒░▒ ░▒░    ▒   ▒▒ ░  ░  ▒   ░ ░▒ ▒░
░ ░░ ░  ▒ ▒ ░░     ░   ░ ░ ░      ░          ░    ░   ░ ░    ░   ▒   ░        ░ ░░ ░ ░ ░ ░    ░   ▒   ░        ░ ░░ ░ 
░  ░    ░ ░              ░        ░          ░          ░  ░     ░  ░░ ░      ░  ░   ░   ░        ░  ░░ ░      ░  ░   
        ░ ░                                                       ░                                ░               
""")
def deal_card():
    cards=[11,2,3,4,5,6,7,8,9,10,10,10,10]
    card=random.choice(cards)
    return card
user_cards=[]
computer_cards=[]
for x in range(0,2):
    user_cards.append(deal_card())
    computer_cards.append(deal_card())
print(user_cards)
print([computer_cards[0]])
decision=input("Do you want to pick a random card (yes or no)? ").lower()

if decision=="yes":
    user_cards.append(deal_card())
    print(user_cards)
    print(computer_cards)
else:
    print(user_cards)
    print(computer_cards)
user=sum(user_cards)
comp=sum(computer_cards)
if user>comp and user<=21 and user>=17:
    print('YOU WON')
elif user<comp and user<=21 and user>=17:
    print('YOU LOSE')
elif user<17 or user>21:
    print('YOU LOSE')
elif user==comp:
    print("DRAW")