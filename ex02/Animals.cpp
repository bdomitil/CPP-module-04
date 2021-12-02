#include "Animals.hpp"

Animal& Animal :: operator= (Animal &second)
{
    this->_type = second._type;
    return (*this);
}

Animal :: Animal (Animal &original)
{
    std::cout << "Animal copy constructor" << std::endl;
    *this = original;
}

Animal :: Animal() : _type("UnknownAnimal")
{
    std::cout << "Animal default constructor" << std::endl;
}

Animal :: Animal(string type) : _type(type)
{
    std::cout << "Animal type constructor" << std::endl;
}

Animal :: ~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}
