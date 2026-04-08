/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:00:47 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/08 21:31:00 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <iostream>

class Account {

private:
	int		totalDeposits;
	int		totalWithdrawals;
	int		accountIndex;
	int		amount;
	int		deposits;

public:
	Account(int initial_deposit);
	~Account();
	void	makeDeposit(int deposit);
	bool	makeWithdrawal(int withdrawal);
	void	displayStatus();
	void	displayAccountsInfos();
};

#endif
