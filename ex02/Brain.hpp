#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string *_ideas;
	int _brain_size;
public:
	Brain();
	Brain(Brain &original);
	virtual ~Brain();
	Brain(const int brain_size);
	Brain& operator= (Brain &second);
	std::string& getIdea(int ideaNum);
};

#endif