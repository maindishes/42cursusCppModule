#include <iostream>

class Cal
{
	private:
		int plus(int x, int y)
		{
			return (x+y);
		}
		int minus(int x, int y)
		{
			return (x-y);
		}
	public:
		void calcul(const std::string &str, int x, int y)
		{
			int (Cal::*fn)(int,int);

			if (str == "plus")
			{
				fn = &Cal::plus;
			}
			else if (str == "minus")
			{
				fn = &Cal::minus;
			}
			std::cout << (this->*fn)(x,y) << std::endl;
		}
};

int main(void)
{
	Cal cal;
	cal.calcul("plus",5,2);
	cal.calcul("minus",5,2);
	return (0);
}

