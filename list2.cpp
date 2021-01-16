#include<iostream>
#include<list>
#include<iterator>

using namespace std;


int main()
{
	
	list<int>mylist;
	
	mylist.push_back(5);
	mylist.push_back(4);
	mylist.push_back(3);
	mylist.push_back(2);
	mylist.push_back(1);
	
	//it will take place at the front of list
    mylist.push_front(-100);	
	
	list<int>::iterator it;
	
	for(it = mylist.begin(); it!=mylist.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	
	
	
	
	return 0;
}
