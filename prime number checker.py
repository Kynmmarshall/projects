def is_prime(num):
    if num <= 1:
        print("False")
        return 0
    elif num == 2:
        print("True")
        return 0

    for i in range(2, num):
        if num % i == 0:
            print("False")
            return 0
        else:
            print("True")
            return 0


# Test the function
is_prime(1)  # False
is_prime(2)  # True
is_prime(3)  # True
is_prime(73)  # False

