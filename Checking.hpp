//
//  Checking.hpp
//  Account
//
//  Created by Mary on 2/16/24.
//

#ifndef Checking_hpp
#define Checking_hpp


#include <stdio.h>
#include "Account.h"
class Checking: public Account {
public:
    int total;
    int fee;
    int newCheckingBalance;
    
    int getCheckingBalance();
    void checkingWithdrawal();
    void checkingDeposit();
    void annualFee();
    void finalCheckingBalance();
};

#endif /* Checking_hpp */
