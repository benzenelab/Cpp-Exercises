#include<iostream>
#include<vector>
using std::vector;

bool find(vector<int>::iterator first,vector<int>::iterator last, int target)
{
    for (; first != last;first++)
    {
        if(*first == target)
            return true;
    }
    return false;
}

vector<int>::iterator find_iter(vector<int>::iterator first,vector<int>::iterator last, int target)
{
    for (; first != last;first++)
    {
        if(*first == target)
            return first;
    }
    return last;
}

int main(void)
{
    vector<int> v{5, 9, 8, 7, 6, 2, 8, 4};
    std::cout << find(v.begin(), v.end(), 70);

    return 0;
}