#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;


int main()
{
	int arr[5] = {5,4,3,2,1};
	
	//copy array to list
	
	list<int>mylist(arr,arr+5);
	
	//sort this list
	mylist.reverse();	
	
	list<int>::iterator it;
	
	
	it = find(mylist.begin(),mylist.end(),5);
 
 
    //deleting element
    mylist.erase(it);
	
	
	for(it = mylist.begin(); it!=mylist.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	
	
	
	
	return 0;
}
