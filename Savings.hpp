//
//  Savings.hpp
//  Account
//
//  Created by Mary on 2/16/24.
//

#ifndef Savings_hpp
#define Savings_hpp

#include <stdio.h>
#include "Account.h"

class Savings: public Account {
public:
    int interestRate;
    int newSavingsBalance;
    
    void getSavingsBalance();
    void savingsWithdrawal();
    void savingsDeposit();
    void addInterest();
    void finalSavingsBalance();
};

#endif /* Savings_hpp */
