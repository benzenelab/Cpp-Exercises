#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string str1,str2;
	cin>>str1>>str2;
	
	if(str1.size()!=str2.size())
	{
		(str1.size() > str2.size()) ? cout<<str1 : cout<<str2;
	}

	return 0;
}
