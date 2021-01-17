#include<iostream>
#include<set>

using namespace std;

int main()
{
	multiset<int>m;
	
	m.insert(12);
	
	m.insert(12);
	
	m.insert(12);
	
	m.insert(12);
	
	multiset<int>::iterator it;
	
	//set will hold only unique element but here multiset can hold duplicate values
	
	for(it = m.begin(); it!=m.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	
	
	
	
	
	
	return 0;
}
