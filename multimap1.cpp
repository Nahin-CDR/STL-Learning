#include<iostream>
#include<map>

using namespace std;

int main()
{
	multimap<string,int>mp;
	
	
	mp.insert(make_pair("coder",221));
	mp.insert(make_pair("coder",221));
	mp.insert(make_pair("coder",221));
	mp.insert(make_pair("coder",221));
	mp.insert(make_pair("coder",221));
	mp.insert(make_pair("coder",221));
	mp.insert(make_pair("coder",221));
	
	//map holds only unique value, but here multimap can hold duplicate values
	
	
	for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<"\n";
	}
	
	
	
	
	
	return 0;
}
