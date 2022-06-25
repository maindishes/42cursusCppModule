#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        static const int materias_size = 4;
        int n_of_learned;
        AMateria *materias[MateriaSource::materias_size];

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &rhs);
        ~MateriaSource(void);

        MateriaSource &operator=(const MateriaSource &rhs);

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
};

/**
 * IearnMateria로 탐색할  Materia를 배열에 저장한다.
 * createMateria로 배열에 있는 Materia를 생성하여 반환한다.
 * MateriaSource 또한 Materia * 복사가 이뤄질때 이전의 배열에 있는 원소들을 적절히 delete 한 후 복사가 이뤄저야한다.
**/