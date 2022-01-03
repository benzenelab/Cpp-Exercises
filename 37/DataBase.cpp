#include"DataBase.h"
#include"person_info.h"

void DataBase::push_back(person_info& newdata)
{
    data.push_back(newdata);
}

DataBase& DataBase::operator+=(person_info &newdata)
{
    this->push_back(newdata);
    return *this;
}

person_info& DataBase::operator[](int index)
{
    if(index>=0&&index<data.size())
    {
        return data[index];
    }
    else
    {
        throw -1;
    }
} 

std::ostream &operator<<(std::ostream &os, DataBase& base)
{
    for(auto i:base.data)
    {
        os << i << " ";
    }
    return os;
}