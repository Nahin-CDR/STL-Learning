#include<iostream>
#include<list>
#include<iterator>

using namespace std;


int main()
{
	int arr[5] = {5,4,3,2,1};
	
	//copy array to list
	
	list<int>mylist(arr,arr+5);
	
	//sort this list
	mylist.reverse();	
	
	list<int>::iterator it;
	
	//inserting element in any position
	it = mylist.begin();
	mylist.insert(it,100);
	
	
	
	for(it = mylist.begin(); it!=mylist.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	
	
	
	
	return 0;
}
