#include "Account.hpp"

int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account( void )
{
	_displayTimestamp();
	this->_nbAccounts--;
	std::cout << " index:" << this->_accountIndex << ";amount:"\
	<< this->_amount << ";closed" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"\
	<< this->_amount << ";created" << std::endl;
}

const std::string currentDateTime()
{
	time_t		local;
	struct tm	tstruct;
	char		mas[100];

	std::cout << "[";
	local = time(0);
	tstruct = *localtime(&local);
	strftime(mas, sizeof(mas), "%Y%m%d_%H%M%S", &tstruct);
	return mas;
}

//////getters/////
int		Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int		Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int		Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int		Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() + 1 << ";total:"\
	<< getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:"\
	<< getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:"\
	<< this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount" << this->_amount\
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:"\
	<< this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount" << this->_amount\
	<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount\
	<< ";deposits:" << this->_nbDeposits<< ";withdrawals:" << this->_nbWithdrawals\
	<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << currentDateTime();
	std::cout << "]";
}