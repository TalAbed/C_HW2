#include <stdio.h>
#include <math.h>
#include "myBank.h"

int main(){
	char c;
	double amount, r;
	int acc_num;
	while (c!='E'){
		printf ("what do you want to do?");
		scanf ("%c",&c);
		if (c=='O'){
			printf ("enter amount of money to deposit: ");
			if (scanf ("%lf", &amount)==1){
				twoAfterPoint (amount);
				openAccount (amount);
			}
			else
		 	  printf ("input error \n");
		}

		else if (c=='B') {
			printf ("Enter your account number: ");
			if (scanf ("%d", &acc_num)==1)
				balance (acc_num);
			else
			  printf ("input error \n");
		
		}
		else if (c=='D'){
			printf ("Enter your account number: ");
			if (scanf ("%d", &acc_num)==1){
				printf ("Enter amount of money you want to deposit: ");
				if (scanf ("%lf", &amount)==1){
					twoAfterPoint (amount);
					deposit (acc_num, amount);
				}
				else
				  printf ("input error \n");
			}
			else
			  printf ("input error \n");
		}
		else if (c=='W'){
			printf ("Enter your account number: ");
			if (scanf ("%d", &acc_num)==1){
				printf ("Enter amount of money you want to withdraw: ");
				if (scanf ("%lf", &amount)==1){
					twoAfterPoint (amount);
					withdrawal (acc_num, amount);
				}
				else
				  printf ("input error \n");
			}
			else
			  printf ("input error \n");
		}
		else if (c=='C'){
			printf ("Enter your account number: ");
			if (scanf ("%d", &acc_num)==1)
				closeAccount (acc_num);
			else
			  printf ("input error \n");
		}
		else if (c=='I'){
			printf ("Enter interest: ");
			if (scanf ("%lf", &r)==1){
				twoAfterPoint (r);
				addRibit (r);
			}
			else
			  printf ("input error \n");
		}
	        else if (c=='P'){
			printAccounts();
		}
		else if (c=='E'){
			closeAll();
		}
		else {
			printf ("input error \n");
		}
        }
}


				
