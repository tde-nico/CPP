#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
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
