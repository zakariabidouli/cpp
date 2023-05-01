#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 _value;
        static const int    _fractionalBits = 8;
    public:

        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(int const value);
        Fixed(float const value);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);



#endif 
