#include<iostream>
#include<string>
using std::string;

int main(int argc,char** agv)
{
    string str;
    for (int i = 1; i < argc;i++)
    {
        str += agv[i];
    }
    std::cout << str << std::endl;
    return 0;
}