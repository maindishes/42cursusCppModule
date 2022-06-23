#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain &bra);
        ~Brain(void);

        Brain &operator=(const Brain &bra);

        const std::string &getIdea(int idx) const;
        void setIdea(int idx, std::string idea);
};
#endif