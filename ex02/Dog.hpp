#ifndef DOG_HPP
#define DOG_HPP
#include "Animals.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
private:
	string _name;
	Brain * _brains;
public:
	Dog();
	Dog(string name);
	virtual ~Dog();
	Dog& operator= (Dog &second);
	Dog(Dog &original);
	virtual void makeSound() const;
	virtual string getType(void) const;
	string getName() const;
	string& getIdea(int ideaNum);
};

#endif