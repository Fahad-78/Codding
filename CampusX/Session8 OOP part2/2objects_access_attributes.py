class person:
    def __init__(self,user_name, user_country):
        self.name = user_name
        self.country = user_country

    def greet(self):
        if self.country=='Bangladesh':
            print("Assalamualaikum", self.name)
        else:
            print('Hello', self.name)


n1 = input("Enter your name: ")
c1 = input("Enter your country: ")
p1 = person(n1,c1)
p1.greet()