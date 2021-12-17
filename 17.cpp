#include<iostream>
#include<sstream>
#include<string>
using namespace std;

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
    string str = "hello hi you are fine! nice";
    istringstream in(str);
    fun(in);

    return 0;
}