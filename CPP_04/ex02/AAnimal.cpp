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