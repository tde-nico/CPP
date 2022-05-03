#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog &src);
	~Dog(void);
	Dog				&Dog::operator=(Dog const &other);
	virtual void	makeSound(void) const;
	virtual Brain	*getBrain(void) const;
private:
	Brain	*brain;
};

#endif