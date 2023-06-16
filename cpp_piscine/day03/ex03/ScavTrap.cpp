# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "SCAV-TP defaut Constructor in called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	std::cout << "SCAV-TP Constructor :" << BLUE << name << NC << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src):ClapTrap(src){
	return ;}

ScavTrap::~ScavTrap(void)
{
	std::cout <<  "SCAV-TP Destruction " << BLUE << this->_name << NC << " mort horriblement" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
        ClapTrap::operator=(rhs);
    return (*this);
}

void ScavTrap::smell_toe(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << NC << " Chanllenge: " << MAGENTA << "Sens mes doigts de pieds" << NC << std::endl;
	return ;
}

void ScavTrap::running_naked(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << NC << " Chanllenge:" << MAGENTA << " running naked in 42" << NC << std::endl;
	return ;
}

void ScavTrap::touch_dirty_fish(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << NC << " Chanllenge:" << MAGENTA << " Put your hands in the box to touch the undefined deveil fish" << NC << std::endl;
	return;
}

void ScavTrap::kiss_from_a_snake(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << NC << " Chanllenge:" << MAGENTA << " kiss with a snake" << NC << std::endl;
	return;
}

void ScavTrap::let_u_pass(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << MAGENTA << " Sage comme toi, I let u pass." << NC << std::endl;
	return;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	int rand_index;
	typedef void (ScavTrap::*action_MemFn) (std::string const & target);

	rand_index = rand() % 5;
	action_MemFn action[5] = {&ScavTrap::smell_toe, &ScavTrap::running_naked, &ScavTrap::touch_dirty_fish, &ScavTrap::kiss_from_a_snake, &ScavTrap::let_u_pass};
	if (this->_energy_points >= 25)
	{
		(this->*(action[rand_index]))(target);
		this->_energy_points -= 25;
		std::cout << "SCAV-TP " << BLUE << this->_name << YELLOW << " EP: " << this->_energy_points << NC << std::endl;;
	}
	else
		std::cout << "SCAV-TP " << BLUE << this->_name << YELLOW << " a plus d'energie pour lancer cette action :(..." << NC << std::endl;
	return ;
}
