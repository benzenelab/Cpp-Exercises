#include<iostream>
#include<vector>
#include<list>
using std::list;
using std::vector;

int main(void)
{
    list<int> li{1, 2, 3, 4, 5, 6};
    vector<int> v_int{1, 2, 3, 4, 5, 6};
    //vector<double> v_dou(li.begin(), li.end());
    vector<double> v_dou(v_int.begin(), v_int.end());

    for(auto i:v_dou)
    {
        std::cout << i << " ";
    }

    return 0;
}