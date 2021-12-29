#include <iomanip>
#include <iostream>
#include <chrono>
#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit )
{
    _displayTimestamp();
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << this->_accountIndex 
            << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    _nbAccounts--;
    std::cout << "index:" << this->_accountIndex 
            << ";amount:" << this->_amount << ";closed" << std::endl;

}

void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() 
            << ";total:" << Account::getTotalAmount() 
            << ";deposits:" << Account::getNbDeposits() 
            << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout <<  "index:" << this-> _accountIndex 
            << ";amount:" <<  this->_amount << ";deposits:" 
            << this->_nbDeposits << ";withdrawals:" 
            << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    int p_amount;

    _displayTimestamp();
    p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    std::cout << "index:" << this->_accountIndex 
            << ";p_amount:" << p_amount 
            << ";deposit:" << this->_nbDeposits 
            << ";amount:" << this->_amount 
            << ";nb_deposits:1" << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex 
                << ";amount:" << this->_amount 
                << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        _displayTimestamp();
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        std::cout << "index:" << this->_accountIndex 
                << ";amount:" << this->_amount << ";withdrawal:" 
                << this->_nbWithdrawals 
                << ";nb_withdrawals:1" << std::endl;
        return (true);
    }
}

int Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

void Account::_displayTimestamp(void)

{
    time_t now = time(0);

	tm t = *localtime(&now);
	std::cout << std::setfill('0') << "[" << (t.tm_year + 1900)
			  << std::setw(2) << t.tm_mon + 1
			  << std::setw(2) << t.tm_mday << "_"
			  << std::setw(2) << t.tm_hour
			  << std::setw(2) << t.tm_min
			  << std::setw(2) << t.tm_sec << "] ";
}

//------------------------------------------------------

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int Account::getNbDeposits ( void )
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals ( void )
{
	return (Account::_totalNbWithdrawals);
}