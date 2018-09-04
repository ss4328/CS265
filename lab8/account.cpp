//Mark Boady
//CS265 - Lab 8

//Simple Class for a Bank Account

//Complete this File's Implementation
#include "account.h"
#include <iostream>

//Constructor: Make Account with Balance 0
account::account()
{
}

//Destructor: Print out Final Balance when Object Deleted
account::~account()
{
	std::cout << "Variable has been deleted with Balance="
		<< balance << std::endl;
}

//checkBalance: Return the current balance
int account::checkBalance()
{
	return 0;
}

//Withdraw: Take Money out of the account
void account::withdraw(int x)
{
}

//Deposit: Insert Money into account
void account::deposit(int x)
{
}

//isOverdrawn: An account is overdrawn if it's balance is negative.
//Returns True/False
bool account::isOverdrawn()
{
	return false;
}
