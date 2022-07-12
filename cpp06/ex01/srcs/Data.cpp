#include "../incs/Data.hpp"

Data::Data() : _data("test") {}

Data::Data(const Data &rhs) {
	*this = rhs;
    // _data = rhs._data;
}

Data::~Data() {}
Data::Data(const std::string str) : _data(str)
{
}
Data& Data::operator=(const Data &rhs) {
	_data = rhs.getData();
	return (*this);
}

const std::string& Data::getData() const {
	return (_data);
}

uintptr_t serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}