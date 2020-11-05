#include "Human.hpp"

brain &Human::get_brain()
{
	return big_bren;
};

std::string Human::identify()
{
	return big_bren.identify();
}
