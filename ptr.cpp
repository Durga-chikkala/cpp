#include<iostream>
using namespace std;
class Complex{
	private:
		int real;
		float imag;
	public:
		Complex(int r,float i)
		{
			real=r;
			imag=i;
		}
		display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
main()
{
	Complex c(5,6);
	Complex *ptr;
	ptr=&c;
	ptr->display();
}
