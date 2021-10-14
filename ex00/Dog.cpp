#include "Dog.hpp"

Dog& Dog :: operator= (Dog &second)
{
    this->_type = second._type;
    return (*this);
}

Dog :: Dog (Dog &original) : Animal("Dog")
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = original;
}

Dog :: Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor" << std::endl;
}

Dog :: Dog(string name) : Animal("Dog") ,_name(name)
{
    std::cout << "Dog name_type constructor" << std::endl;
}

Dog :: ~Dog()
{
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