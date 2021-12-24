#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(void)
{
    vector<int> v{1, 3, 5, 7, 9};
    int res = accumulate(v.cbegin(), v.cend(), 0);
    cout << res;

    return 0;
}