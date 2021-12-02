#include "Brain.hpp"

Brain& Brain :: operator= (Brain &second)
{
    int i = 0;
    while (i < second._brain_size && i < this->_brain_size)
    {
        this->_ideas[i] = std::string(second._ideas[i]);
        i++;
    }
    return (*this);
}

Brain :: Brain () :  _ideas(new std::string[100]), _brain_size(100) 
{
    for (int i = 0; i  < _brain_size; i++)
    {
        _ideas[i] = "idea #";
        _ideas[i] += static_cast<char> (i + 48);
    }
    std::cout << "Brain default constructor" << std::endl;
}

Brain :: Brain (const int brain_size) : _ideas(new std::string[brain_size]), _brain_size(brain_size)
{
     for (int i = 0; i  < _brain_size; i++)
    {
        _ideas[i] = "idea #";
        _ideas[i] += static_cast<char> (i + 48);
    }
    std::cout << "Brain sized constructor" << std::endl;
}

Brain :: ~Brain()
{
    std::cout << "Brain destructor" << std::endl;
    delete[] _ideas;
}

Brain :: Brain (Brain &original)
{
    *this = original;
}

std::string&  Brain :: getIdea(int ideaNum)
{
    return ( _ideas[ideaNum]);
}