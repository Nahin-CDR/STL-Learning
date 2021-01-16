#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
	int arr[5] = {12,45,67,89,90};
	
	list<int>mylist(arr,arr+5);
	
	if(mylist.empty())
	{
		cout<<"List is empty !";
	}
	else
	{
		cout<<"List filled\n\n";
	}
	
	list<int>::iterator it;
	
	
	
	for(it = mylist.begin(); it!=mylist.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	
	cout<<"\n";
	
	//printing first element
	cout<<"First element of LIST "<<mylist.front();
	
	cout<<"\n";
	//printing last element
	cout<<"Last element of LIST "<<mylist.back();
	
	
	
	cout<<"\n\n\n";
	
	
	//cutting last element
	mylist.pop_back();
	
	//cutting first element
	mylist.pop_front();
	

	
	
	for(it = mylist.begin(); it!=mylist.end(); it++)
	{
		cout<<*it<<" ";
	}
	

	
	
	return 0;
}
