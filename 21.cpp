#include<iostream>
#include<list>
#include<string>
#include<vector>
using std::list;
using std::string;
using std::vector;

int main(void)
{
    list<const char *> li = {"hello", "how", "are", "you"};
    vector<string> v;
    v.assign(li.cbegin(), li.cend());

    for(auto i:v)
    {
        std::cout << i << std::endl;
    }

    return 0;
}