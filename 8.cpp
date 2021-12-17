#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6};
    auto i = v.begin();
    auto j = v.end() - 1;
    while (i<=j)
    {
        cout << *i + *j << " ";
        i++;
        j--;
    }
    

    return 0;
}