#pragma once

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		static	const	int		width = 8;
		int						value;
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed &operator=(const Fixed &other);
		int getRawBits(void) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
};
std::ostream& operator << (std::ostream &out, Fixed const &value);
