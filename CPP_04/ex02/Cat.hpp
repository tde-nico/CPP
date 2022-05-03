#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal
{
public:
	Cat(void);
	Cat(const Cat &src);
	~Cat(void);
	Cat				&Cat::operator=(Cat const &other);
	virtual void	makeSound(void) const;
	virtual Brain	*getBrain(void) const;
private:
	Brain	*brain;
};

#endif
