def  is_even(num):
    """
    This function return is the number is odd or even
    input - any valid integer
    output - even/odd
    created - 04th april 2026
    """

    if num%2 == 0:
        return 'even'
    else:
        return 'odd'

#function
#function_name(input)
while True:
    user_input = input("Enter a number (or 'q' to quit): ")
    
    if user_input == "q":
        print("Goodbye!")
        break
    x = is_even(int(user_input))
    print(x)