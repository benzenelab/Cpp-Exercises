#pragma once

class person_info
{
    std::string name;
    size_t age;
    std::string phone;

    friend bool operator==(const person_info &obj1, const person_info &obj2);
    friend std::ostream &operator<<(std::ostream &os,  person_info &info);
    friend std::istream &operator>>(std::istream &is,  person_info &info);

public:
    person_info(std::string& s1,size_t age,std::string& s2): name(s1),age(age),phone(s2){}
    person_info(const char* s1,size_t age,const char* s2): name(s1),age(age),phone(s2){}
    person_info():age(0){}
    person_info &operator=(const person_info &ori);
    void show();
};

std::ostream &operator<<(std::ostream &os, person_info &info);
std::istream &operator>>(std::istream &is, person_info &info);
bool operator==(const person_info &obj1, const person_info &obj2);
bool operator!=(const person_info &obj1, const person_info &obj2);