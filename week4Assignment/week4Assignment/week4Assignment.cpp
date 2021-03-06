// week4Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "SavingsAccount.h"
#include <iostream>

using namespace std;

int main()
{
	int months;
	int i = 1;
	double rate;

	//First Saver
	double savingsBalance = 1000;
	SavingsAccount firstSaver;
	rate = firstSaver.get_annualInterestRate();
	double fs_monthlyInterest = firstSaver.calculateMonthlyInterest(savingsBalance, rate);
	cout << "The monthly interest incuded by the first saver is: " << fs_monthlyInterest << endl;
	cout << "Enter the number of months the savings account is at this rate." << endl;
	cin >> months;
	cout << endl;
	double fs_totalBalance = firstSaver.get_savingsBalance(savingsBalance, fs_monthlyInterest, months);
	cout << "The total balance after " << months << " months is: " << fs_totalBalance << endl;

	//Second Saver
	savingsBalance = 2000;
	SavingsAccount secondSaver;
	rate = secondSaver.get_annualInterestRate();
	double ss_monthlyInterest = secondSaver.calculateMonthlyInterest(savingsBalance, rate);
	cout << "The monthly interest incuded by the second saver is: " << ss_monthlyInterest << endl;
	cout << "Enter the number of months the savings account is at this rate." << endl;
	cin >> months;
	cout << endl;
	double ss_totalBalance = firstSaver.get_savingsBalance(savingsBalance, ss_monthlyInterest, months);
	cout << "The total balance after " << months << " months is: " << ss_totalBalance << endl;
}

