#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;



void Account::makeDeposit(int nb)
{
    _displayTimestamp();
    _nbDeposits = _nbDeposits + 1;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    _amount = _amount + nb;
    _totalAmount = _totalAmount + nb;
    _totalNbDeposits = _totalNbDeposits + 1;
    std::cout << ";deposit:" << nb << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits <<  std::endl;

}

bool Account::makeWithdrawal(int nb)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount - nb < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
    std::cout << nb;
    _amount = _amount - nb;
	_totalAmount = _totalAmount - nb;
	_totalNbWithdrawals =_totalNbWithdrawals + 1;
	_nbWithdrawals = _nbWithdrawals + 1;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbDeposits << std::endl;

    return (true);
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int nb)
{
    _accountIndex = _nbAccounts;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << nb << ";created" << std::endl ;
	_amount = nb;
    _nbAccounts++;
	_nbDeposits = 0;
    _totalAmount = _totalAmount + nb;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl ;

}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;

}

void    Account::_displayTimestamp( void )
{
    std::time_t        currentTime = std::time(NULL);
    std::tm         localTime = *std::localtime(&currentTime);

    int year = localTime.tm_year + 1900;
    int    month = localTime.tm_mon + 1;
    int    day = localTime.tm_mday;
    int    hour = localTime.tm_hour;
    int    minutes = localTime.tm_min;
    int    secs = localTime.tm_sec;
    std::cout << "[" << year;
    std::cout << std::setw(2) << std::setfill('0') << month;
    std::cout << std::setw(2) << std::setfill('0') << day << "_";
    std::cout << std::setw(2) << std::setfill('0') << hour;
    std::cout << std::setw(2) << std::setfill('0') << minutes;
    std::cout << std::setw(2) << std::setfill('0') << secs;
    std::cout << "] ";
}