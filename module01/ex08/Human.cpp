#include "Human.hpp"

void
Human::meleeAttack(std::string const &target)
{
	std::cout << "meleeAttack with " + target << std::endl;
}

void
Human::rangedAttack(std::string const &target)
{
	std::cout << "rangedAttack with " + target << std::endl;
}

void
Human::intimidatingShout(std::string const &target)
{
	std::cout << "intimidatingShout with " + target << std::endl;
}

void
Human::action(std::string const &action_name, std::string const &target)
{
	void(Human::*ptr[3])(std::string const &target)= {&Human::intimidatingShout
	,&Human::meleeAttack, &Human::rangedAttack};
	std::string	funcs[3] = {"intimidatingShout", "meleeAttack", "rangedAttack"};

	for (int i = 0; i < 3; i++)
	{
		if (action_name == funcs[i])
		{
			(this->*(ptr[i]))(target);
			break;
		}
	}

}
