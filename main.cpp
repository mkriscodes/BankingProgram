//
//  main.cpp
//  Account
//
//  Created by Mary on 2/16/24.
//

#include <iostream>
#include "Account.h"
#include "Checking.hpp"
#include "Savings.hpp"
using namespace std;
using std::cout;
using std::endl;

//variables
int getCheckingBalance();
int getSavingsBalance();
void checkingWithdrawal(int withdrawAmount);
void checkingDeposit(int depositAmount);
void savingsWithdrawal(int withdrawAmount);
void savingsDeposit(int depositAmount);
void finalCheckingBalance();
void finalSavingsBalance();

int main() {
    cout << "*****INITIAL BALANCES*****" << endl;
    cout << "Checking Account Balance: $" << getCheckingBalance() << endl;
    cout << "Savings Account Balance: $" << getSavingsBalance() << endl;
    
    cout << "*****TRANSACTIONS*****" << endl;
    checkingWithdrawal(250);
    savingsDeposit(100);
    cout << "Apply $5 fee to Checking Account" << endl;
    cout << "Apply 2% interest to Savings Account" << endl;
    
    cout << "*****FINAL BALANCES*****" << endl;
    cout << "Checking Account Balance: $"; finalCheckingBalance();
    cout << "Savings Account Balance: $"; finalSavingsBalance();
    cout << endl;
}
