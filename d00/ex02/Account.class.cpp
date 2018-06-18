#include <iostream>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;

void	Account::_displayTimestamp(void)
{
	std::cout << "[20150406_153629] ";
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;

	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "created" << std::endl;
}

int		Account::getNbAccounts()
{
	return (_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (_totalAmount);
}

int		Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void		Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
			  << "total:" << getTotalAmount() << ";"
			  << "deposits:" << getNbDeposits() << ";"
			  << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";";
			_amount += deposit;
			_totalAmount += deposit;
			_nbDeposits++;
			_totalNbDeposits++;
	std::cout << "deposit:" << deposit << ";"
			  << "amount:" << _amount << ";"
			  << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";";
	_amount -= withdrawal;
	if (!checkAmount())
	{
		_amount += withdrawal;
		std::cout << "withdrawal:refused" << std::endl;
	}
	else
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";"
			  << "amount:" << _amount << ";"
			  << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return (true);
}

int		Account::checkAmount(void) const
{
	if (_amount < 0)
		return (0);
	return (1);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "deposits:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals
			  << std::endl;
}

Account::Account(void) {}
