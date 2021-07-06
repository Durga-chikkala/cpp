#include<iostream>
using namespace std;
class Animal{
	public:
		virtual walk()=0;
};
class Dog:public Animal{
	public:
		walk()
		{
			cout<<"i can walk and run"<<endl;
		}
};
class snake:public Animal{
	public:
		walk()
		{
			cout<<"i can move on rectilinear motion"<<endl;
		}
	
};
main()
{
	snake s;
	s.walk();
	Dog d;
	d.walk();
}
