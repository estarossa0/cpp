#include "Character.hpp"

Character::Character()
{
	std::cout << "character created\n";
}

Character::Character(std::string const &name) : name(name), ap(40), wep(nullptr)
{
	std::cout << "character " + name + " created\n";
}
Character::~Character()
{
	std::cout << "character died\n";
}
Character::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	this->name = other.getName();
	this->ap = other.getAp();
	this->wep = other.getWeapon();
	return (*this);
}

void	Character::recoverAP()
{
	ap += 10;
	if (ap > 40)
		ap = 40;
	std::cout << this->name + " Recovered 10 AP he have now " << this->ap << std::endl;
}
void	Character::equip(AWeapon *new_wep)
{
	wep = new_wep;
}
void	Character::attack(Enemy *victim)
{
	if (wep && ap >= wep->getAPCost())
	{
		std::cout << name +  " attacks " + victim->getType() + " with a " + wep->getName() << std::endl;
		wep->attack();
		victim->takeDamage(wep->getDamage());
		ap -= wep->getAPCost();
		if (ap < 0) {ap = 0;}
		if (victim->getHP() <= 0)
			delete victim;
	}
}

std::ostream &operator<<(std::ostream &out, Character const &other)
{
	if (other.getWeapon())
	{
		out << other.getName() + " has " << other.getAp()
		<< " AP and wields a " + other.getWeapon()->getName() << std::endl;
	}
	else
	{
		out << other.getName() + " has " << other.getAp() << " AP and is unarmed\n";
	}
	return (out);
}

int	Character::getAp() const
{
	return (ap);
}
std::string	const &Character::getName() const
{
	return (name);
}
AWeapon *Character::getWeapon() const
{
	return (wep);
}
