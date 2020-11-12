#pragma once
#include <iostream>

class Enemy
{
protected:
	int		hp;
	std::string	type;
	Enemy();
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(Enemy const &other);
	Enemy &operator=(Enemy const &other);

	std::string const &getType() const;
	int getHP() const;

	virtual void takeDamage(int amount);
};
