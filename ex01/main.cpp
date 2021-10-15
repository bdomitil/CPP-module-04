#include "Dog.hpp"
#include "Cat.hpp"



int main()
{
	Animal *zoo[6];
	std::cout << "______________________________________________" << std::endl;

	for (int i = 0; i < 3; i++)
	{
	    zoo[i] = new Cat;
		std::cout << "______________________________________________" << std::endl;
	}
	for (int i = 3; i < 6; i++)
	{
	    zoo[i] = new Dog;
		std::cout << "______________________________________________" << std::endl;
	}

	Cat *cat1 = new Cat();
		std::cout << "______________________________________________" << std::endl;

	Cat *cat2 = new Cat();
		std::cout << "______________________________________________" << std::endl;

	*cat1 = *cat2;
		std::cout << "______________________________________________" << std::endl;


	*cat1 = *cat2;


	delete cat1;
	delete cat2;
	for (int i = 0; i < 6; i++)
		delete zoo[i];

}