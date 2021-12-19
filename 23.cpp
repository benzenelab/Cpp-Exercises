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
    //deque<string> qu;
    list<string> qu;
    for (int i = 0; i < 5;i++)
    {
        string str;
        std::cin >> str;
        qu.push_back(str);
    }

    for (auto first = qu.cbegin(), last = qu.cend(); first != last;first++)
    {
        std::cout << *first << " ";
    }

        return 0;
}