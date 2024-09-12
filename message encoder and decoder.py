
print("""
88      a8P                                                        88             88                                 
88    ,88'                                                         ""             88                                 
88  ,88"                                                                          88                                 
88,d88'   8b       d8 8b,dPPYba,  88,dPYba,,adPYba,      ,adPPYba, 88 8b,dPPYba,  88,dPPYba,   ,adPPYba, 8b,dPPYba,  
8888"88,  `8b     d8' 88P'   `"8a 88P'   "88"    "8a    a8"     "" 88 88P'    "8a 88P'    "8a a8P_____88 88P'   "Y8  
88P   Y8b  `8b   d8'  88       88 88      88      88    8b         88 88       d8 88       88 8PP""""""" 88          
88     "88, `8b,d8'   88       88 88      88      88    "8a,   ,aa 88 88b,   ,a8" 88       88 "8b,   ,aa 88          
88       Y8b  Y88'    88       88 88      88      88     `"Ybbd8"' 88 88`YbbdP"'  88       88  `"Ybbd8"' 88          
              d8'                                                     88                                             
             d8'                                                      88  
""")
alphabet=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
should_continue="yes"
while should_continue=="yes":
    direction=input("Type 'encode' to encrypt and 'decode' to decrypt:\n ").lower()
    text=input("Type your message:\n").lower()
    shift=int(input("Type the shift number:\n"))
    def encrypt(original_text,shift):
        encrypted = ""
        for letters in original_text:
            if letters in alphabet:
                shifted_index=alphabet.index(letters)+shift
                if shifted_index>25:
                   shifted_index=shifted_index%25-1
                encrypted+=alphabet[shifted_index]
            else:
                encrypted+=letters
        print(f"here is your encrypted message: {encrypted}")
    def decrypt(original_text,shift):
        decrypted = ""
        for letters in original_text:
            if letters in alphabet:
                shifted_index=alphabet.index(letters)-shift
                decrypted+=alphabet[shifted_index]
            else:
                decrypted += letters
        print(f"here is your decrypted message: {decrypted}")
    if direction=="encode":
       encrypt(original_text=text,shift=shift)
    else:
        decrypt(original_text=text, shift=shift)
    should_continue=input("Do you still want to encrypt or decrypt a message (yes or no)?\n").lower()