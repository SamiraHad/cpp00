

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    Account::_accountIndex = _nbAccounts;
    Account::_amount = initial_deposit;
    Account::_nbDeposits = 0;
    Account::_nbWithdrawals = 0;

    Account::_nbAccounts++;
    Account::_totalAmount += _amount;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    Account::_nbAccounts--;
    Account::_totalAmount -= _amount;         
}

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}


void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();

    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:";

    _amount += deposit;
    _nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;

    std::cout << deposit << ";amount:" << _amount << ";nb_deposits:" 
              << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
               << ";withdrawal:";

    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return false;
    }

    _amount -= withdrawal;
    _nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;

    std::cout << ";withdrawal:" << withdrawal << ";amount:" 
              << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;

    return true;
}
int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
   Account:: _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" 
              << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" 
              << Account::_totalAmount<< ";deposits:" 
              << Account::_totalNbDeposits << ";withdrawals:" 
              << Account::_totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);
    std::tm *t = std::localtime(&now);

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