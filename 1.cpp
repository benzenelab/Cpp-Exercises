#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string str1,str2;
	cin>>str1>>str2;
	
	if(str1!=str2)
	{
		(str1 > str2) ? cout<<str1 : cout<<str2;
	}
	else
	{
		cout << str1;
	}

	return 0;
}
