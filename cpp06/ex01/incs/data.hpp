#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <cstdint>
# include <string>

class Data 
{
    private:
	    std::string _data;

    public:
	    Data();
        Data(const std::string str);
        Data(const Data &rhs);
	    ~Data();

	    Data& operator=(const Data &rhs);

	    const std::string& getData() const;
};

uintptr_t serialize(Data *ptr);
Data* deserialize(uintptr_t raw);

#endif