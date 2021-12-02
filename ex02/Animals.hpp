#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include <iostream>

typedef std::string string;

class Animal
{
protected:
	string _type;
	Animal();
	Animal(string type);
	Animal(Animal &original);
public:
	Animal &operator= (Animal &second);
	virtual void makeSound() const = 0;
	virtual string getType() const = 0;
	virtual ~Animal();
};

#endif