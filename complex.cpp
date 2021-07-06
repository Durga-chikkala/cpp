#include<iostream>
using namespace std;
class Complex{
	private:
		int real;
		float imag;
	public:
		Complex()
		{
			real=0;
			imag=0;
		}
		Complex(int n,float m)
		{
			real=n;
			imag=m;
		}
		void display()
		{
			cout<<"complex number is :"<<real<<"+"<<imag<<"i"<<endl;
		}
		int getreal()
		{
			return real;
		}
		float getfloat()
		{
			return imag;
		}
};
Complex add2obj(Complex c1,Complex c2)
{
	int r;
	float i;
	r=c1.getreal()+c2.getreal();
	i=c1.getfloat()+c2.getfloat();
	Complex temp(r,i);
	return temp;
}
main()
{
	Complex comp(5,6),comp1(5,4),comp2;
	comp.display();
	comp1.display();
	comp2=add2obj(comp,comp1);
	comp2.display();
	
}
