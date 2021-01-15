#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,int>mp;
	
	mp.insert({1,10});
	mp.insert({2,20});
	mp.insert({3,30});
	mp.insert({4,40});
	
	pair<map<int,int>::iterator,map<int,int>::iterator>it;
	
	it = mp.equal_range(2);
	
	cout<<"lower bound"<<"\n";
	
	cout<<it.first->first<<" : "<<it.first -> second;
	
	cout<<"\nUpper Bound \n";
	
	cout<<it.second->first<<" : "<<it.second -> second;
	
	
	
	return 0;
}
