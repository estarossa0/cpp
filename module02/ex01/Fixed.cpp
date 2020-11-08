#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called.\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	value = other.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (value);
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	value = raw;
}

Fixed::Fixed(const int i) : value(0)
{
	std::cout << "Int constructor called." << std::endl;
	value = i << this->width;
}

Fixed::Fixed(const float i) : value(0)
{
	std::cout << "Float constructor called." << std::endl;
	value = roundf(i * 256);
}
float Fixed::toFloat(void) const
{
	return ((float)value / 256);
}

int Fixed::toInt(void) const
{
	return (value >> this->width);
}

std::ostream& operator << (std::ostream &out, Fixed const &value)
{
	return(out << value.toFloat());
}
