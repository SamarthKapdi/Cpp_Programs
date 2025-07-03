#include <iostream>
using namespace std;
class Account
{
    double balance;

public:
    void setBalance(double bal)
    {
        balance = bal;
    }
    double getBalance()
    {
        return balance;
    }
    double withdraw(double amt)
    {

        balance = balance - amt;
    }
    double deposit(double amt)
    {
        balance = balance + amt;
    }
};
int main()

{
    Account a;
    a.setBalance(8002.00);
    double Amount = a.getBalance();
    printf("Current Balance: %lf\n", Amount);
    a.withdraw(60.00);
    printf("Remaining Balance: %lf\n", a.getBalance());
    a.deposit(3564.00);
    printf("Updated Balance: %lf\n", a.getBalance());
    return 0;
}