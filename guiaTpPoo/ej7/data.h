#include <iostream>

using namespace std;

class BankAccount {
  private:
    int accountNumber;
    double balance;
    double interestRate;
  public:
    BankAccount(int, double);
    void deposit(double);
    void withdraw(double);
    void creditInterest();
    int getAccountNumber();
    double getBalance();
    double getInterestRate();
};