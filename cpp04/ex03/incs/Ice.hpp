#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice &rhs);
        ~Ice(void);

        Ice &operator=(const Ice &rhs);

        AMateria *clone() const;
        void 
};
#endif