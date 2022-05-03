#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
public:
	virtual ~AAnimal(void);
	virtual AAnimal		&operator=(const AAnimal &other) = 0;
	virtual void		makeSound(void) const = 0;
	const std::string	&getType(void) const;
	virtual Brain		*getBrain(void) const = 0;
protected:
	std::string type;
};

#endif
