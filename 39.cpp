#include<iostream>
#include<vector>
using namespace std;

struct MaxNum{
    int operator()(int a,int b,int c)
    {
        if(a>b && a>c)
           return a;
        else if(b>a && b>c)
           return b;
        else
           return c;
    }
};

class FetchString
{
    std::istream &is;
    std::string str;

public:
    FetchString(std::istream &_is = std::cin) : is(_is) {}
    string& operator()()
    {
        if(is)
        {
            std::getline(is, str);
            return this->str;
        }
        else
        {
            this->str = "";
            return this->str;
        }
    }
};

int main(void)
{
    FetchString fetch;
    vector<string> v;
    for (int i = 0; i < 5;i++)
    {
        v.push_back(fetch());
    }
    for(auto i:v)
    {
        cout << i << " ";
    }

    return 0;
}