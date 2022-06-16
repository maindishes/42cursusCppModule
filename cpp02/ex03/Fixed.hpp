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

        bool    operator>(const Fixed &fixed) const;
        bool    operator<(const Fixed &fixed) const;
        bool    operator>=(const Fixed &fixed) const;
        bool    operator<=(const Fixed &fixed) const;
        bool    operator==(const Fixed &fixed) const;
        bool    operator!=(const Fixed &fixed) const;

        Fixed   operator+(const Fixed &fixed) const;
        Fixed   operator-(const Fixed &fixed) const;
        Fixed   operator*(const Fixed &fixed) const;
        Fixed   operator/(const Fixed &fixed) const;


        Fixed   &operator++(void);  //후위     후위는 증감연산이 일어나기전의 객체를 리턴 해줘야하기 때문에 ++ 할때 또 복사생성자를 호출해야한다. 그래서 전위 보다 느리다!
        Fixed   operator++(int);    //전위         
        Fixed   &operator--(void);
        Fixed   operator--(int);

        // 큰 상수에대한 참조값을 반환 , 참조를 가져와서 값을 비교해서 값에대한 참조를 반환  
        static Fixed    &min( Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed    &max( Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        

};  

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif