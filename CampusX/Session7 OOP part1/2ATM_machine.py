#Making an ATM machine
class Atm:

    #constractor (special function)
    def __init__(self):
        self.pin = ''
        self.balance = 0
        self.menu()

    def menu(self):
        user_input = input("""
        Hi how can I help you?
        1. press 1 to create pin
        2. press 2 to change pin
        3. press 3 to check balance
        4. press 4 to withdraw
        5. Anything else to exit
        """)

        if user_input == '1':
            #create pin
            self.create_pin()
        elif user_input == '2':
            #change pin
            pass
        elif user_input == '3':
            #check balance
            pass
        elif user_input == '4':
            #withdraw balance
            pass
        else:
            #exit
            exit()

    def create_pin(self):
        user_pin = int(input("Enter new pin: "))
        self.pin = user_pin

        user_balance = int(input("Enter your current balance for verify."))
        self.balance = user_balance
        print("Your new pin created successfully.")

obj = Atm()
