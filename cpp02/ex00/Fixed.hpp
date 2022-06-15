#pragma once
#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>

class Fixed
{
    private:
        int                 _fixed_point_value;
        static const int    _nb_of_fractional_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &fixed);
        ~Fixed();

        Fixed & operator=(const Fixed &fixed);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif