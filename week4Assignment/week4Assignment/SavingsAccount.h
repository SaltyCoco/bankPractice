#pragma once
#include <vector>
#include <string>
class SavingsAccount
{
private:
	double savingsBalance;	
	double monthlyInterest;
public:
	SavingsAccount();
	static float get_annualInterestRate();
	static float modifyAnnualInterestRate(float newRate, float annualInterestRate);
	double calculateMonthlyInterest(double savingsBalance, float annualInterestRate);
	double get_savingsBalance(double savingsBalance, double monthlyInterest, int months);
};

