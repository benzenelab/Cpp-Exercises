#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto i = v.begin(), j = v.end(); i != j;i++)
    {
        *i = (*i) * (*i);
    }
    for(auto i:v)
    {
        cout << i << " ";
    }

    return 0;
}