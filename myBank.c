#include <stdio.h>
#include "myBank.h"

#define currentAcc 901
#define numOfAcc 50
#define oc 2
#define accBalance 0
#define accSit 1

double allAccounts [numOfAcc][oc];

void openAccount (double amount){
	int i;
	for (i = 0; i < numOfAcc; i++){
	       if (allAccounts[i][accSit]==0){
		     allAccounts[i][accSit] = 1;
		     allAccounts[i][accBalance] = amount;
		     printf("Your account number is: %d\n", currentAcc + i);
		     return;
	       }
	}
	printf ("Sorry, There is no available account \n");
}

void balance (int ac_num){
	int a = ac_num - currentAcc;
	if (a<0 || a>numOfAcc || allAccounts [a][accSit]==0){
		printf ("This account does not exist \n");
		return;
	}
	printf ("The balance of your account is %.2lf \n", allAccounts[a][accBalance]);
}

void deposit (int ac_num, double amount){
	int a = ac_num - currentAcc;
	if (a<0 || a>numOfAcc || allAccounts [a][accSit]==0){
		printf ("This account does not exist \n");
		return;
	}
	allAccounts [a][accBalance] = allAccounts [a][accBalance] + amount;
	printf ("The new balance of your account is %.2lf \n", allAccounts[a][accBalance]);
}

void withdrawal (int ac_num, double amount){
	int a = ac_num - currentAcc;
	if (a<0 || a>numOfAcc || allAccounts [a][accSit]==0){
		printf ("This account does not exist \n");
		return;
	}
	if (amount > allAccounts [a][accBalance]){
		printf ("You cant withdraw that amount of money \n");
		return;
	}
	allAccounts [a][accBalance] = allAccounts [a][accBalance] - amount;
	printf ("The new balance of your account is %.2lf \n", allAccounts[a][accBalance]);
}

void closeAccount (int ac_num){
	int a = ac_num - currentAcc;
	if (a<0 || a>numOfAcc || allAccounts [a][accSit]==0){
		printf ("This account does not exist");
		return;
	}
	allAccounts [a][accSit] = 0;
	allAccounts [a][accBalance] = 0;
	printf ("Your account is now close");
}

void addRibit (double r){
	r = r/100;
	int i;
	for (i = 0; i<numOfAcc; i++){
	       if (allAccounts [i][accSit]==1){
	           allAccounts [i][accBalance] = allAccounts [i][accBalance] + (allAccounts[i][accBalance]*r);
	       }
	}
        printf ("V \n");
}

void printAccounts(){
	int i;
	for (i = 0; i<numOfAcc; i++){
		if (allAccounts [i][accSit]==1){
			printf ("account number = %d, balance = %.2lf \n", currentAcc+i, allAccounts[i][accBalance]);
		}
	}
	printf ("All accounts were printed");
}

void closeAll(){
	int i;
	for (i = 0; i<numOfAcc; i++){
		allAccounts [i][accBalance] = 0;
		allAccounts [i][accSit] = 0;
	}
}

void  twoAfterPoint (double x){
	x = (int) (x*100);
	x = x/100;
}

