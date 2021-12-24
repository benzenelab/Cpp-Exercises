#include<iostream>
using namespace std;

int main(void)
{
    int num = 1;
    auto f = [num](int ber) 
        { return num + ber; };
    auto f2 = [](int num1, int num2)
    { return num1 + num2; };

    cout << f(1);
    cout << f2(1, 2);
    return 0;
}