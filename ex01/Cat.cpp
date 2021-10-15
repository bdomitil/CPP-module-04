#include "Cat.hpp"

Cat& Cat :: operator= (Cat &second)
{
    this->_type = second._type;
    *(this->_brains) = *second._brains;
 
    return (*this);
}

Cat :: Cat (Cat &original) 
{
    std::cout << "Cat copy constructor" << std::endl;
    *this = original;
}

Cat :: Cat() : Animal("Cat"), _brains(new Brain)
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat :: Cat(string name) : Animal("Cat") ,_name(name), _brains(new Brain)
{
    std::cout << "Cat name_type constructor" << std::endl;
}

Cat :: ~Cat()
{
    delete _brains;
    std::cout << "Cat destructor" << std::endl;
}

void Cat :: makeSound() const
{
    if (_name.length() > 0)
        std::cout << "Cat meows" << std::endl;
    else
        std::cout << "Cat meows" << std::endl;
}

string Cat :: getName() const
{
    return (_name);
}

string&  Cat :: getIdea(int ideaNum)
{
   return (_brains->getIdea(ideaNum));
}
