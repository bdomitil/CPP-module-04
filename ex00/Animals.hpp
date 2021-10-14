#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include <iostream>

typedef std::string string;

class Animal
{
protected:
	string _type;
public:
	Animal();
	Animal(Animal &original);
	Animal(string type);
	virtual ~Animal();
	Animal &operator= (Animal &second);
	virtual void makeSound() const;
	string getType() const;
};

#endif