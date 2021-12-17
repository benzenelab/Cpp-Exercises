#include<iostream>
#include<string>

std::istream& fun(std::istream& in)
{
    std::string str;
    while(in>>str)
    {
        std::cout << str << std::endl;
    }
    in.clear();
    return in;
}


int main(void)
{
    fun(std::cin);

    return 0;
}