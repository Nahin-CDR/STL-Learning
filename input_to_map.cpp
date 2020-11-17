#include<iostream>
#include<map>

using namespace std;


int main()
{
	map<int,int> mymap;
	
	
	for(int i=0; i<5; i++)
	{int n;
		cin>>n;
		mymap[i] = n;
	}
	
	for(auto it = mymap.begin(); it!=mymap.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<"\n";
	}
	
	
	
	return 0;
}
