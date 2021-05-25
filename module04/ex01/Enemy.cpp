#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{
	std::cout << "enemy constructor called\n";
}

Enemy::~Enemy()
{
	std::cout << "destructor called\n";
}
Enemy::Enemy(Enemy const &other)
{
	*this = other;
}

Enemy &Enemy::operator=(Enemy const &other)
{
	this->hp = other.getHP();
	this->type = other.getType();
	return (*this);
}

std::string const &Enemy::getType() const
{
	return (type);
}

int	Enemy::getHP() const
{
	return (hp);
}

void Enemy::takeDamage(int amount)
{
	if (hp > 0 && amount >= 0)
	{
		std::cout << type + " taking " << amount << " damage\n";
		hp -= amount;
		if (hp < 0)
			hp = 0;
	}
}
