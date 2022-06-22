#pragma once
#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
        int                 _fixed_point_value;
        static const int    _nb_of_fractional_bits = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float vlaue);
        Fixed(const Fixed &fixed);
        ~Fixed();

        Fixed& operator=(const Fixed &fixed);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);     // 인자가 os 와 Fixed 객체가 들어오면 요넘이 실행된다 . 아니면 원래의 std::ostream 에 있는 얘가 실행된다. 반환값이 ostream& . 다시 이게  << 이걸 만나면 인자로 들어간다.

#endif