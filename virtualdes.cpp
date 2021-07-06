#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"A cons"<<endl;
		}
	  	~A()
		{
			cout<<"A dest"<<endl;
		}
};
class B:public A{
	public:
		B()
		{
			cout<<"B cons"<<endl;
			
		}
		~B()
		{
			cout<<"B dest"<<endl;
		}
};
main()
{
	A *ptr=new B();
	delete ptr;
}
