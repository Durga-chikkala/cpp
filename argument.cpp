#include<iostream>
using namespace std;
class A{
	protected:
		int r;
	public:
		void am()
		{
			r=0;
		}
		display()
		{
			cout<<r<<endl;
		}
};
class B:public A{
	public:
		using A::am;
		void am(int i)
		{
			r=10;
		}
	
};
main()
{
	B b;
	b.am();
	b.display();
}
