/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:38:58 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/09 20:14:00 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::nbAccounts = 0;
int Account::totalAmount = 0;
int Account::totalNbDeposits = 0;
int Account::totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	displayTimestamp();
	accountIndex = nbAccounts;
	nbAccounts++;
	amount = initial_deposit;
	nbDeposits = 0;
	nbWithdrawals = 0;
	totalAmount += initial_deposit;
	std::cout << "index:" << accountIndex
			  << ";amount:" << amount
			  << ";created" << std::endl;
}

Account::~Account(void)
{
	displayTimestamp();
	std::cout << "index:" << accountIndex << ";amount:" << amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	displayTimestamp();
	std::cout << "index:" << accountIndex << ";p_amount:" << amount;
	amount += deposit;
	nbDeposits++;
	totalAmount += deposit;
	totalNbDeposits++;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << amount << ";nb_deposits:" << nbDeposits << std::endl;
}


bool Account::makeWithdrawal(int withdrawal)
{
	displayTimestamp();
	std::cout << "index:" << accountIndex << ";p_amount:" << amount;
	if (amount < withdrawal)
	{
		std::cout << ";Witthrawal:refused" << std::endl;
		return false;
	}
	std::cout << ";withdrawal:" << withdrawal;
	amount -= withdrawal;
	nbWithdrawals++;
	totalAmount -= withdrawal;
	totalNbWithdrawals++;
	std::cout << ";amount:" << amount << ";nb_withrawals:" << nbWithdrawals << std::endl;
	return true;
}

void Account::displayStatus()
{
	displayTimestamp();
	std::cout << "index:" << accountIndex << ";amount:" << amount << ";deposits:" << nbDeposits << ";withrawals:" << nbWithdrawals << std::endl;
}
void Account::displayAccountsInfos()
{
	displayTimestamp();
	std::cout << "accounts:" << nbAccounts << ";total:" << totalAmount << ";deposits:" << totalNbDeposits << ";withrawals:" << totalNbWithdrawals << std::endl;
}

void Account::displayTimestamp() {
	std::time_t now = std::time(0);
	std::tm* t = std::localtime(&now);
	std::cout << "["
			  << (t->tm_year + 1900)
			  << std::setw(2) << std::setfill('0') << (t->tm_mon + 1)
			  << std::setw(2) << std::setfill('0') << t->tm_mday
			  << "_"
			  << std::setw(2) << std::setfill('0') << t->tm_hour
			  << std::setw(2) << std::setfill('0') << t->tm_min
			  << std::setw(2) << std::setfill('0') << t->tm_sec
			  << "] ";
}
