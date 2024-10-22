print("""
 _____________________
|  _________________  |
| | KYNM CALCULATOR | |
| |_________________| |
|  ___ ___ ___   ___  |
| | 7 | 8 | 9 | | + | |
| |___|___|___| |___| |
| | 4 | 5 | 6 | | - | |
| |___|___|___| |___| |
| | 1 | 2 | 3 | | x | |
| |___|___|___| |___| |
| | . | 0 | = | | / | |
| |___|___|___| |___| |
|_____________________|""")
def add(n1,n2):
    return n1+n2
def subtract(n1,n2):
     return n1-n2
def divide(n1,n2):
     return n1/n2
def multiply(n1,n2):
     return n1*n2
count="yes"
result=0
same="no"
while count=="yes":
    if same=="yes":
        n1=result
    else:
        n1=float(input("What's the first number: "))
    print("+\n-\n/\n*")
    operation=input("Pick an operation: ")
    n2=float(input("What's the second number: "))
    print(f"{n1}{operation}{n2}")


    if operation=='+':
        result=add(n1,n2)
        print(result)
    elif operation=='-':
        result=subtract(n1,n2)
        print(result)
    elif operation=='/':
        result=divide(n1,n2)
        print(result)
    elif operation=='*':
        result=multiply(n1,n2)
        print(result)
    count=input("Do you want to continue calculating (yes or no): ").lower()
    if count=="yes":
        same=input("Do you want to continue with this result (yes or no): ").lower()



