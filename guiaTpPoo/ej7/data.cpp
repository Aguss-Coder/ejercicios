#include <iostream>
#include "data.h"

using namespace std;

BankAccount::BankAccount(int accountNumber, double interestRate): accountNumber(accountNumber), interestRate(interestRate) {
  balance = 0;
}

void BankAccount::deposit(double amount) {
  if (amount > 0) {
    balance += amount;
  }
}

void BankAccount::withdraw(double amount) {
  if (amount > 0 && amount <= balance) {
    balance -= amount;
  }
}

void BankAccount::creditInterest() {
  balance += balance * interestRate;
}

int BankAccount::getAccountNumber() {
  return accountNumber;
}

double BankAccount::getBalance() {
  return balance;
}

double BankAccount::getInterestRate() {
  return interestRate;
}