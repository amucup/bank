#pragma once
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class SavingsAccount
{
private:
	int id;
	double balance;
	double rate;
	int lastDate;
	double accumulation;

	void record(int date, double amount);
	double accumulate(int date) const {
		return accumulation + balance*(date - lastDate);
	}
public:
	int getId() {
		return id;
	}
	double getBalance() {
		return balance;
	}
	double getRate() {
		return rate;
	}
	void deposit(int date, double amount);
	void withdraw(int date, double amount);
	void settle(int date);
	void show();
	SavingsAccount(int date,int id,double rate);
	~SavingsAccount();
};


#endif // !_ACCOUNT_H_
