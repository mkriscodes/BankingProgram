//
//  Account.h
//  Account
//
//  Created by Mary on 2/16/24.
//

#ifndef Account_h
#define Account_h

class Account {
public:
    int accountNumber;
    int checkingBalance;
    int savingsBalance;
    int depositAmount;
    int withdrawAmount;
    
    void checkingDeposit();
    void checkingWithdrawal();
    void savingsDeposit();
    void savingsWithdrawal();
};

#endif /* Account_h */
