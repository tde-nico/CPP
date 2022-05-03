#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name(""), _grade(Bureaucrat::lowestGrade)
{
	std::cout << "Default Bureaucrat\n";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	checkGrade();
	std::cout << "Standard Bureaucrat\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Copy Bureaucrat\n";
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Bureaucrat\n";
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & other)
{
	this->_grade = other._grade;
	std::cout << "Assignement Bureaucrat\n";
	return *this;
}

const std::string	&Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade(int quantity)
{
	std::cout << "incrementGrade of " << quantity << std::endl;
	this->_grade -= quantity;
	checkGrade();
}

void	Bureaucrat::decrementGrade(int quantity)
{
	std::cout << "decrementGrade of " << quantity << std::endl;
	this->_grade += quantity;
	checkGrade();
}

void	Bureaucrat::checkGrade(void) const
{
	if (this->_grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
	return ostr;
}
