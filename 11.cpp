#include<iostream>

void fun(std::initializer_list<int> &li)
{
    int sum = 0;
    for(auto i:li)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    std::initializer_list<int> li{a[0], a[1], a[2], a[3], a[4]};
    fun(li);
}