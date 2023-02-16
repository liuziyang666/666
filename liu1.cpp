#include<iostream>
using namespace std;
int main()
{
	//x是输入的数字 
	int x;
	cin>>x;
	if(x%3==0)
	{
		cout<<"3 ";
	}
	if(x%5==0)
	{
		cout<<"5 ";
	}
	if(x%7==0)
	{
		cout<<"7";
	}
	return 0;
}
