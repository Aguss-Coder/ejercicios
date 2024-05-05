#include <iostream>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[]) {
  int accountNumber1, accountNumber2;
  double interestRate1, interestRate2;

  cout << "Enter account number: ";
  cin >> accountNumber1;
  cout << "Enter interest rate: ";
  cin >> interestRate1;

  BankAccount account1(accountNumber1, interestRate1);

  cout << "Enter account number: ";
  cin >> accountNumber2;
  cout << "Enter interest rate: ";
  cin >> interestRate2;

  BankAccount account2(accountNumber2, interestRate2);

  account1.deposit(1000);
  account1.withdraw(200);
  account1.creditInterest();

  cout << "Account Number: " << account1.getAccountNumber() 
       << ", Balance: " << account1.getBalance() 
       << ", Interest Rate: " << account1.getInterestRate() << endl;

  account2.deposit(2000);
  account2.withdraw(500);
  account2.creditInterest();

  cout << "Account Number: " << account2.getAccountNumber() 
       << ", Balance: " << account2.getBalance() 
       << ", Interest Rate: " << account2.getInterestRate() << endl;

  return 0;
}
