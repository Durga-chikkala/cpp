#include<iostream>
using namespace std;
class A{
	public:
		display()
		{
			cout<<"hii prends"<<endl;
		}
};
class B:public A{
	public:
		display()
		{
			cout<<"bye prends"<<endl;
		}
};
main()
{
	A a;
	B b;
	A *pa;
	pa=&a;
	pa->display();
	pa=&b;
	pa->display();
}
