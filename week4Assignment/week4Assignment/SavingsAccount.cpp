#include "pch.h"
#include <string>
#include "SavingsAccount.h"

using namespace std;
SavingsAccount::SavingsAccount()
{
	double savingsBalance;
	double monthlyInterest;
	int months;
}
float SavingsAccount::get_annualInterestRate()
{
	float annualInterestRate = 0.02;
	return annualInterestRate;
}
float SavingsAccount::modifyAnnualInterestRate(float newRate, float annualInterestRate)
{
	annualInterestRate = newRate;
	return annualInterestRate;
}
double SavingsAccount::calculateMonthlyInterest(double savingsBalance, float annualInterestRate)
{
	double monthlyInterest;
	monthlyInterest = (savingsBalance * annualInterestRate) / 12;
	return monthlyInterest;
}
double SavingsAccount::get_savingsBalance(double savingsBalance, double monthlyInterest, int months)
{
	int i = 1;
	double totalBalance = monthlyInterest + savingsBalance;
	while (i < months)
	{
		monthlyInterest = (totalBalance * monthlyInterest) / 12;
		totalBalance = totalBalance + monthlyInterest;
		i = i + 1;
		return totalBalance;
	}
}

