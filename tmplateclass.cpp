#include<iostream>
using namespace std;
template<typename t>
class Numeric{
	private:
		t first,second;
	public:
		Numeric(t a,t b)
		{
			first=a;
			second=b;
		}
		mul()
		{
			cout<<"product is:"<<first*second<<endl;
		}
		
};
main()
{
	Numeric<int>obj(10,20);
	obj.mul();
	

}
