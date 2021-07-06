#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int *p,i;
	p=new int[6];
	cout<<"enter values::";
	
	for(i=0;i<6;i++)
	{
		cin>>*(p+i);
	}
	for(i=0;i<6;i++)
	{
		cout<<*(p+i);
	}
}
