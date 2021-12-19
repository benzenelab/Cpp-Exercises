#include<iostream>
#include<list>
#include<deque>
#include<string>
#include<vector>
using std::deque;
using std::list;
using std::string;
using std::vector;

int main(void)
{
    list<int> li{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> qu1, qu2;

    for(auto i:li)
    {
        (i % 2 == 0) ? qu1.push_back(i) : qu2.push_back(i);
    }

    for(auto i:qu1)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    for(auto i:qu2)
    {
        std::cout << i << " ";
    }

    return 0;
}