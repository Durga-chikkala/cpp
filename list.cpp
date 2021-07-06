#include<iostream>
#include<list>
using namespace std;
main()
{
	list<int>l;
	l.push_back(100);
	l.push_back(200);
	l.push_back(400);
	l.push_front(30);
	list<int>::reverse_iterator li=l.rbegin();
	for(int i=0;i<l.size();i++)
	{
		cout<<*li<<endl;
		li++;
	}
	
}
