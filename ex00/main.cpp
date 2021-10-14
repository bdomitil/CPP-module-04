#include "Dog.hpp"
#include "Cat.hpp"



int main()
{
    const Animal* meta = new Animal();
    std::cout << "______________________________________________" << std::endl;

    const Animal* j = new Dog("Sobakin");
    std::cout << "______________________________________________" << std::endl;

    const Animal* i = new Cat("Murzik");
    std::cout << "______________________________________________" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << "______________________________________________" << std::endl;

    std::cout << i->getType() << " " << std::endl;
    std::cout << "______________________________________________" << std::endl;

    i->makeSound(); //will output the cat sound!
    std::cout << "______________________________________________" << std::endl;

    j->makeSound();
    std::cout << "______________________________________________" << std::endl;

    meta->makeSound();
    std::cout << "______________________________________________" << std::endl;    



    delete meta;
    delete j;
    delete i;

}