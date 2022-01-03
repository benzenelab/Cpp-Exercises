#pragma once

class DataBase
{
    friend std::ostream &operator<<(std::ostream &os, DataBase &base);

    std::vector<person_info> data;
public:
    void push_back(person_info &newdata);
    auto begin() { return data.begin(); }
    auto end() { return data.end(); }
    DataBase &operator+=(person_info &newdata);
    person_info &operator[](int index);
};

DataBase &DataBase::operator+=(person_info &newdata);
person_info &DataBase::operator[](int index);
std::ostream &operator<<(std::ostream &os, DataBase &base);