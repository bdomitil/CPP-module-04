#ifndef CAT_HPP
#define CAT_HPP
#include "Animals.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
private:
	string _name;
	Brain * _brains;

public:
	Cat();
	Cat(string name);
	virtual ~Cat();
	Cat& operator= (Cat &second);
	Cat(Cat &original);
	virtual void makeSound() const;
	string getName() const;
	string& getIdea(int ideaNum);
};

#endif