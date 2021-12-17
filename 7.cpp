#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6};
    auto len = v.size();
    decltype(v.size()) i;
    for (i = 1; i < len;i++)
    {
        cout << v[i] + v[i - 1] << " ";
    }
        return 0;
}