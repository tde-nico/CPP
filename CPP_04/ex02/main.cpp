#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define ANIMALS 8

int	main(void)
{
	AAnimal	*animals[ANIMALS];
	Brain	*brain;

	for (int i = 0; i < ANIMALS; i++)
	{
		if (i < ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[7]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";
	brain->ideas[3] = "Mum";
	std::cout << animals[7]->getBrain()->ideas[0] << std::endl;

	for (int i = 0; i < ANIMALS; i++)
		delete animals[i];
}
