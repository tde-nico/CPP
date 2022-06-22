#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default Dog\n";
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copy Dog\n";
	*this = src;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Destructor Dog\n";
}
/*
Dog	&Dog::operator=(Dog const &other)
{
	std::cout << "Assignement operator\n";
	this->type = other.getType();
	*(this->brain) = *(other.getBrain());
	return *this;
}*/

void	Dog::makeSound(void) const
{
	std::cout << "Wouf\n";
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}
