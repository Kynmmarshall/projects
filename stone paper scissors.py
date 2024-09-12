import random
choice=["""          
                     _.-._
                    | | | |_
                    | | | | |
                    | | | | |
                  _ |  '-._ |
                  \`\`-.'-._;
                   \    '   |
                    \  .`  /
                      |   |""","""
    .-.  _
    | | / )
    | |/ /
   _|__ /_
  / __)-' )
  \  `(.-')
   > ._>-'
  / \/""","""   
                __________                  
         ___.--"          "\'.         
  ------f"               // \\\        
        |                    |||       
        |                    |||     1
        |                     |/
    ----L_-XXX-.             .|
                "\   -<_____///     
                  \___)           
                                      
                          """]
user=int(input("what do you choose? 0 for paper,1 for scissors and 2 for stone\n"))
print("YOUR CHOICE")
print(choice[user])
print("""


COMPUTER CHOICE""")
count=random.randint(0,2)
print(choice[count])
if user==count:
    print("DRAW")
elif user==0 and count==1 or user==1 and count==2 or user==2 and count==0:
    print("GAME OVER")
else:
    print("WON")
