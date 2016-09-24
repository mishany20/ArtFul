#include<iostream>
#include<stdio.h>
using namespace std;
int f(int a)
{
	if (a==1)
		return 1;
	else
		if(a==0)
			return 1;
		else
		return f(a-1)+f(a-2);
}
void main()
{
	int c=f(8);
	cout<<c;
	system("pause");
}

