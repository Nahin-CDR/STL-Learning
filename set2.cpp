#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    set<int>myset;
    
    
    myset.insert(10);
    myset.insert(9);
    myset.insert(8);
    
    set<int>::iterator it;
    
    
    //insert function returns a "pair" , and first part of it is an iterator,and second part is boolean.
    //if we can insert element then boolean is true otherwise false
    
    
    
    pair<set<int>::iterator,bool> p;
    
    p = myset.insert(10);
    
    if(p.second == false)
    {
    	cout<<"Couldn't inserted !\n";
	}
	else
	{
		cout<<"Insertion Successful\n";
	}
    

    for(auto it = myset.begin(); it!=myset.end(); it++)
    {
    	cout<<*it<<" ";
	}
    
	return 0;
}
