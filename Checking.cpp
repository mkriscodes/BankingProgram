//
//  Checking.cpp
//  Account
//
//  Created by Mary on 2/16/24.
//

#include "Checking.hpp"
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

//variables
int total;
int fee;
int newCheckingBalance;

int getCheckingBalance () {
    return 500;
}

//methods
void checkingWithdrawal (int withdrawAmount) {
    cout << "Withdraw $" << withdrawAmount << " from Checking Account" << endl;
    newCheckingBalance = getCheckingBalance() - withdrawAmount;
}

void checkingDeposit (int depositAmount) {
    cout << "Deposit $" << depositAmount << " into Checking Account" << endl;
    newCheckingBalance = getCheckingBalance() + depositAmount;
}

//apply after transactions
void annualFee() {
    cout << newCheckingBalance - 5 << endl;
}

void finalCheckingBalance () {
    annualFee();
}

