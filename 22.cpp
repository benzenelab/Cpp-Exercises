#include<iostream>
#include<list>
#include<string>
#include<vector>
using std::list;
using std::string;
using std::vector;

bool fun(auto& a,auto& b)
{
    if(a.size()!= b.size())
    {
        return false;
    }
    else
    {
        for (auto i = a.cbegin(), j = b.cbegin(), k = a.cend(); i != k;i++,j++)
        {
            if(*i != *j)
            {
                return false;
            }
        }
        return true;
    }
}

int main(void)
{
    list<int> li = {1, 2, 3, 4, 5, 6};
    vector<int> v = {1, 2, 3, 4, 5, 6};

    std::cout << fun(li, v);

    return 0;
}