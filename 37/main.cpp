#include<iostream>
#include"person_info.cpp"
#include"DataBase.cpp"


int main(void)
{
    person_info p1("wang", 20, "012000");
    person_info p2("li", 45, "565656");

    DataBase base;
    base += p1;
    base += p2;
    //std::cout << base[0];
    std::cout << base;

    return 0;
}
