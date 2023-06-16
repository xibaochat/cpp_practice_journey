#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(std::string);
	SuperTrap(SuperTrap const &);
	virtual ~SuperTrap(void);
	SuperTrap & operator=( SuperTrap const &);
};

#endif

//reference: https://www.learncpp.com/cpp-tutorial/virtual-base-classes/
//https://stackoverflow.com/questions/8419120/adding-virtual-removes-the-error-type-base-is-not-a-direct-base-of-derived-c/8419204
