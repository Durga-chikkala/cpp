#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector<int> vec;
	vec.push_back(100);
	vec.push_back(200);
	vec.push_back(300);
	vec.pop_back();
/*	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl; 
	}*/
	cout<<vec.back();
	vector<int>::reverse_iterator l=vec.rbegin();
	cout<<*l<<endl;
;}
