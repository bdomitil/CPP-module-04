#ifndef DOG_HPP
#define DOG_HPP
#include "Animals.hpp"


class Dog : public Animal
{
private:
	string _name;
public:
	Dog();
	Dog(string name);
	virtual ~Dog();
	Dog& operator= (Dog &second);
	Dog(Dog &original);
	virtual void makeSound() const;
	string getName() const;

};

#endif