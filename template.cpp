#include<iostream>
using namespace std;
template <typename T>
T mymax(T x, T y)
{
	return x+y;
}
int main()
{
	cout << mymax<int>(4, 5);
}
