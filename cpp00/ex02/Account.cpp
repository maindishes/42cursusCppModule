#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
    :_accountIndex(_nbAccounts++),_amount(0),_nbDeposits(0),_nbWithdrawals(0)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "creaated" << std::endl;  
}

Account::Account(int initial_deposit)
    :_accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0),
    _nbWithdrawals(0)
{
    _totalAmount += initial_deposit;

    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "creaated" << std::endl; 
}
void Account::makeDeposit(int deposit)
{
    if (deposit < 0)
        return ;
    
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "p_amount:" << _amount << ';';

    _amount += deposit;
    _nbDeposits++; // deposit 횟수

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;

    std::cout << "deposit:" << deposit << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "nb_deposits:" << _nbDeposits;
    std::cout << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal < 0)
        return false;
    
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "p_amount:" << _amount << ';';

    if(_amount < withdrawal)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;

    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;

    std::cout << "withdrawal:" << withdrawal << ';';
    std::cout << "amount:"     << _amount << ';';
    std::cout << "nb_withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;

    return true;
}
int Account::checkAmount(void) const // 함수 전체에서 멤버 변수가 수정 안 된다,
//.인자에 const 가 붙으면 그 인자가 함수에서 안 바뀔때 , 함수 앞에 있으면 return 값에 const 가 붙으므로 외부에서 반환값을 
//수정 하지 못한다(const 상수로 선언 된것과 같음)
{
    return _amount;
}
void Account::_displayTimestamp()
{
    char buf[18];
    time_t curtime;
    struct tm *timeinfo;

    time(&curtime);
    timeinfo = localtime(&curtime);
    strftime(buf, 18, "[%Y%m%d_%H%M%S]",timeinfo);
    std::cout << buf << ' ' ;
}
void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex <<';';
    std::cout << "amount:" << Account::checkAmount() << ';';
    std::cout << "deposits:" << _nbDeposits << ';';
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "account:" << Account::getNbAccounts() << ';';
    std::cout << "total:" << Account::getTotalAmount() << ';';
    std::cout << "deposits:" << Account::getNbDeposits() << ';';
    std::cout << "withdrawals:" << Account::getNbWithdrawals();
    std::cout << std::endl;
}

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}
int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "closed" << std::endl;
}