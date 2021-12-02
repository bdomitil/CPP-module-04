#include "Dog.hpp"

Dog& Dog :: operator= (Dog &second)
{
    this->_type = second._type;
    this->_brains = second._brains;
    return (*this);
}

Dog :: Dog (Dog &original) 
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = original;
}

Dog :: Dog() : Animal("Dog") , _brains(new Brain)
{
    std::cout << "Dog default constructor" << std::endl;
}

Dog :: Dog(string name) : Animal("Dog") ,_name(name), _brains(new Brain)
{
    std::cout << "Dog name_type constructor" << std::endl;
}

Dog :: ~Dog()
{
    delete _brains;
    std::cout << "Dog destructor" << std::endl;
}

void Dog :: makeSound() const
{
    if (_name.length() > 0)
        std::cout << _name << " barks" << std::endl;
    else
        std::cout << "Dog barks" << std::endl;
}

string Dog :: getName() const
{
    return (_name);
}

string&  Dog :: getIdea(int ideaNum)
{
   return (_brains->getIdea(ideaNum));
}

string Dog :: getType(void) const
{
    return (_type);
}
