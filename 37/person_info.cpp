#include"person_info.h"

person_info& person_info::operator=(const person_info& ori)
{
    name= ori.name;
    age = ori.age;
    phone= ori.phone ;
    return *this;
}

void person_info::show()
{
    std::cout << name << " " << age << " " << phone << std::endl;
}

std::ostream& operator<<(std::ostream &os , person_info& info)
{
    os << info.name << " " << info.age << " " << info.phone;
    return os;
}

std::istream& operator>>(std::istream &is , person_info& info)
{
    int _age;
    is >> info.name >> _age >> info.phone;
    if(_age>=0)
    {
        info.age = _age;
        return is;
    }
    else{
        info = person_info();
        return is;
    }
}

bool operator==(const person_info& obj1, const person_info& obj2)
{
    if(obj1.name==obj2.name && obj1.age==obj2.age && obj1.phone==obj2.phone)
        return true;
    else
        return false;
}

bool operator!=(const person_info& obj1, const person_info& obj2)
{
    return !(obj1 == obj2);
}