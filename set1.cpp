#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int>myset;
    myset.insert(10);
    myset.insert(9);
    myset.insert(8);
    
    cout<<"set always store unique value and return sorted form:\n";

    for(auto it = myset.begin(); it!=myset.end(); it++)
    {
    	cout<<*it<<" ";
	  }
	return 0;
}
