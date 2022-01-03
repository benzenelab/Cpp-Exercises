#include<iostream>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(void)
{
    map<string, function<int(int, int)>> caculator ={ 
        {"+",std::plus<int>()},
        {"-",std::minus<int>()},
        {"*",std::multiplies<int>()},
        {"/",std::divides<int>()}
    };
    string op;
    int fir, las, sum;

    cin >> fir >> op >> las;
    sum = caculator[op](fir, las);

    cout << sum;

    return 0;
}