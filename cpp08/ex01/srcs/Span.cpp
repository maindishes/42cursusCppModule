#include "../incs/Span.hpp"

#include <limits>
Span::Span(void)
{
	_v.reserve(0);
}

Span::Span(unsigned int N)
{
	_v.reserve(N);
}

Span::Span(const Span &rhs)
:_v(rhs._v)
{
	// _v = rhs._v;
}

Span &Span::operator=(const Span &rhs)
{
	_v = rhs._v; // 벡터끼리 복사할땐 대입연산자 쓰면된다. 자동으로 리사이즈 + 깊은복사가 된다.
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (_v.size() == _v.capacity())
		throw Span::OverFlowException();
	_v.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator const &begin,std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator iter;
	// int i = 1;
	for (iter = begin; iter != end; iter++)
	{
		addNumber(*iter);
		// i++;
	}
}

int Span::longestSpan() const
{
	if (_v.size() <= 1)
		throw Span::EmptyException();
	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

int Span::shortestSpan() const
{
	if (_v.size() <= 1)
		throw Span::EmptyException();
	std::vector<int> vtmp = _v;
	std::sort(vtmp.begin(),vtmp.end());
	std::vector<int>::iterator it;
	int min = std::numeric_limits<int>::max();
	int temp = 0;
	for (it = vtmp.begin(); it != vtmp.end()-1; it++)
	{
		temp = *(it + 1) - *(it);
		min = (min > temp ? temp : min);
	}
	return (min);
}

const char *Span::OverFlowException::what() const throw()
{
	return ("OVERFLOW");
}

const char *Span::EmptyException::what() const throw()
{
	return ("EMPTY");
}

unsigned int Span::getSize() const
{
	return (static_cast<unsigned int>(_v.size()));
}

std::vector<int> Span::getData() const
{
	return _v;
}