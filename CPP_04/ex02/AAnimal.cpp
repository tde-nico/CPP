#include "AAnimal.hpp"

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor AAnimal\n";
}

void	AAnimal::makeSound(void) const
{
	std::cout << "* AANIMAL SOUND *\n";
}

const std::string	&AAnimal::getType(void) const
{
	return (this->type);
}

AAnimal	&AAnimal::operator=(AAnimal const &other)
{
	std::cout << "Assignement operator\n";
	this->type = other.getType();
	*(this->brain) = *(other.getBrain());
	return *this;
}

Brain	*AAnimal::getBrain(void) const
{
	return (this->brain);
}
