class Bank:

    def __init__(self, balance: List[int]):
        self.balance = balance

    def transfer(self, account1: int, account2: int, money: int) -> bool:
        return self.deposit(account2, 0) and self.withdraw(account1, money) and self.deposit(account2, money)

    def deposit(self, account: int, money: int) -> bool:
        return self.withdraw(account, -money)

    def withdraw(self, account: int, money: int) -> bool:
        if account < 1 or account > len(self.balance) or self.balance[account - 1] < money:
            return False
        self.balance[account - 1] -= money
        return True


# Your Bank object will be instantiated and called as such:
# obj = Bank(balance)
# param_1 = obj.transfer(account1,account2,money)
# param_2 = obj.deposit(account,money)
# param_3 = obj.withdraw(account,money)
