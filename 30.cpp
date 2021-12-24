#include<iostream>
using namespace std;

int main(void)
{
    int k = 30;

    auto f = [&k]() mutable -> bool 
    {
        bool res = !k;
        while(k !=0)
        {
            k--;
        }
        return !res;
    };

    cout << f();
    cout << endl
         << k;
    return 0;
}