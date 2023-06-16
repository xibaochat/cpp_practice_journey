#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class Human
{
private:
	Brain const brain;
public:
	const Brain & getBrain(void) const;
	const std::string identify(void) const;
};

#endif
