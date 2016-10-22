#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char str[10],tt[10],rr[10],*p=new char[10];
	int s=0;
	scanf("%s %s %s",&str,&tt,rr);
	strcat(str,tt);
	cout<<str;
	p=strstr(str,rr);
while(strlen(rr))
	{
	if (rr-str!=0)
	{
		p++;
        s++;
	    cout<<s;
	}
	else
	
		cout<<"net vhog";
	
}
	system("pause");
}