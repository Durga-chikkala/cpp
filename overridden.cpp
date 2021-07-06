#include<iostream>
using namespace std;
class A{
	public:
		display(){
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
	A *pa=&a;
	B *pb=&b;
	pb->display(); 
}
