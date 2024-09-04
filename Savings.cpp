//
//  Savings.cpp
//  Account
//
//  Created by Mary on 2/16/24.
//

#include "Savings.hpp"
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

//variables
int interestRate;
int newSavingsBalance;

int getSavingsBalance () {
    return 500;
}

//methods
void savingsWithdrawal (int withdrawAmount) {
    cout << "Withdraw $" << withdrawAmount << " from Savings Account" << endl;
    newSavingsBalance = getSavingsBalance() - withdrawAmount;
}

void savingsDeposit (int depositAmount) {
    cout << "Deposit $" << depositAmount << " into Savings Account" << endl;
    newSavingsBalance = getSavingsBalance() + depositAmount;
}

//apply after transactions
void addInterest(int interestRate) {
    cout << ((newSavingsBalance * interestRate) / 100) + newSavingsBalance;
}

void finalSavingsBalance() {
    addInterest(2);
}
