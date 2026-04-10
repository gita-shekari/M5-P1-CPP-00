/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:00:47 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/10 19:29:38 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <iostream>
#include <ctime>
#include <iomanip>

class Account {
private:
	static	int nbAccounts;
	static	int	totalAmount;
	static	int	totalNbDeposits;
	static	int	totalNbWithdrawals;
			int	accountIndex;
			int	amount;
			int	nbDeposits;
			int	nbWithdrawals;
public:
	typedef Account t;
	Account(int initial_deposit);
	~Account();
	void	makeDeposit(int deposit);
	bool	makeWithdrawal(int withdrawal);
	void	displayStatus();
	static	void	displayTimestamp(void);
	static	void	displayAccountsInfos();
};

#endif
