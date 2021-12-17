#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string str,words;

    while(cin>>str)
    {
        words= words+str+" ";
    }
    cout<<words<<endl;
	return 0;
}
