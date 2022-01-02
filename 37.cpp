#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;

class person_info
{
    std::string name;
    size_t age;
    std::string phone;

    friend bool operator==(const person_info &obj1, const person_info &obj2);

public:
    person_info(std::string& s1,size_t age,std::string& s2): name(s1),age(age),phone(s2){}
    person_info(const char* s1,size_t age,const char* s2): name(s1),age(age),phone(s2){}
    person_info &operator=(const person_info &ori);
    void show();
};

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

bool operator==(const person_info& obj1, const person_info& obj2)
{
    if(obj1.name==obj2.name && obj1.age==obj2.age && obj1.phone==obj2.phone)
        return true;
    else
        return false;
}

class DataBase
{
    std::vector<person_info> data;
public:
    void push_back(person_info &newdata);
    auto begin() { return data.begin(); }
    auto end() { return data.end(); }
    DataBase &operator+=(person_info &newdata);
};

void DataBase::push_back(person_info& newdata)
{
    data.push_back(newdata);
}

DataBase& DataBase::operator+=(person_info &newdata)
{
    this->push_back(newdata);
    return *this;
}

int main(void)
{
    person_info p1("wang", 20, "012000");
    person_info p2("li", 45, "565656");
    DataBase base;
    base += p1;
    base += p2;
    for(auto i:base)
    {
        i.show();
    }

    return 0;
}
