#include<iostream>
#include<string>
using namespace std;

class Account
{
private:
    /* data */
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    Account(int accountNumber = 0, string accountHolderName = "No name", double balance = 0);
    /*
    Account();//default constructor(隐式构造函数)
    已经提供显示构造函数后，编译器不会再提供默认构造函数，所以这里会报错，只能手动提供默认构造函数
    */
    void withdraw(double amount);
    void deposit(double amount);
    void display();
}; 

void Account::display()
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Balance: " << balance << endl;
}


Account::Account(int accountNumber, string accountHolderName, double balance)
{
    this->accountNumber = accountNumber;
    this->accountHolderName = accountHolderName;
    this->balance = balance;
}

void Account::withdraw(double amount)
{
    if (balance < amount)
    {
        cout << "Insufficient balance" << endl;
    }
    else
    {
        balance -= amount;
    }
}

void Account::deposit(double amount)
{
    balance += amount;
}

int main()
{
    Account a1(101, "John", 5000); //隐式调用
    //Account a1 = Account(101, "John", 5000); 显式调用
    a1.display();
    a1.deposit(2000);
    a1.display();
    return 0;
}
