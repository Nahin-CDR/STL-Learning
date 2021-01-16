#include<iostream>
#include<map>


using namespace std;

int main()
{
    map<int,int>mp;
	
	//inserting elements into map
	
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    
    
    
    
    
    
    for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<"\n";
	} 
   
   
   
   
   
   
   
	return 0;
}
