#include<iostream>
#include<list>
#include<vector>
#include<iterator>
using namespace std;

int main(void)
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v(begin(ia), end(ia));
    list<int> li(begin(ia), end(ia));

    for (auto it = v.cbegin(); it != v.cend();)
    {
        if(*it %2 == 0)
        {
            it = v.erase(it);
        }
        else{
            it++;
        }
    }
    for (auto it = li.cbegin(); it != li.cend();)
    {
        if(*it %2 != 0)
        {
            it = li.erase(it);
        }
        else{
            it++;
        }
    }

    for(auto i:v)
        std::cout << i << " ";
    std::cout << "\n";
    for(auto i:li)
        std::cout << i << " ";

    return 0;
}