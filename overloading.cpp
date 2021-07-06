#include<iostream>
using namespace std;
class Durga{
	private:
		int a,b;
	public:
		fDurga(int x,int y)
		{
			a=x;
			b=y;	
		}
		display()
		{
			cout<<"a="<<a<<","<<"b="<<b<<endl;
		}
};
class Ravi:public Durga{
	private:
		int o,p;
	public:
		Ravi(int k,int l)
		{
			o=k;
			p=l;
			
		}
		rdisplay()
		{
			cout<<"a="<<p<<","<<"b="<<o<<endl;
		}
};
main()
{
	Durga d;
	d.fDurga(10,20);
	Ravi r(30,40);
	r.display();
	
	
}
