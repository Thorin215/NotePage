class Account:
    def __init__(self, acc_holder):
        self.money = 0
        self.holder = acc_holder

a = Account('Jim')
print(a.holder)