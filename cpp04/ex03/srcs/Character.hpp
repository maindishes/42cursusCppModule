#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        static const int inventory_size = 4;
        AMateria *inventory[Character::inventory_size];
        int n_of_equip;

        Character(void);
    public:
        Character(std::string name);
        Character(const Character &rhs);
        ~Character();

        Character &operator=(const Character &rhs);

        std::string const &getName() const;
        void equip(int idx);
        void use(int idx, ICharacter &target);
};

/**
 * private 변수로 name과 인벤토리 배열을 가짐.
 * 주의해야할점
 * 1. 생성자에서 inventory 배열 목록 초기화. 각각 널 포인터 연결 해준다.
 * 2. 복사생성자, 대입연산자로 새로운 inventory목록 복사해 오는 경우 기존 inventory에 할당 돼있던 AMateria 객체는 해제(delete)해줘야 한다.
 * 
 * equip은 inventory 중 먼저 나오는 empty배열에 Materia 를 저장한다.
 * unequip은 inventory의 idx번째 Materia 를 NULL로 초기화 해줬다.
 * 이때 delete는 하지 않기 때문에 외부에서 사용시 포인터 주소를 먼저 복사해 뒀다가 delete를 따로 해줘야한다.
 * use는 AMateria 의 use함수를 사용하고 사용한 Materia를 unequip하는 식으로 구현.
**/