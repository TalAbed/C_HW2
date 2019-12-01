#ifndef _MYBANK_H_
#define _MYBANK_H_
#define numOfAcc 50
#define oc 2
#define currentAcc 901
extern double allAccounts [numOfAcc][oc];

void  openAccount (double  amount);

void  balance (int ac_num);

void deposit (int ac_num, double amount);

void withdrawal (int ac_num, double amount);

void closeAccount (int ac_num);

void addRibit (double r);

void printAccounts ();

void closeAll ();

void twoAfterPoint (double x);

#endif
