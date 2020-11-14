#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
	forward_list<int> list1 = {1,2,3,8,67,54,34};
	
	//adding element at the front of list
	list1.push_front(12);
	
	
	
    for(auto it = list1.begin(); it!=list1.end(); it++)
    {
    	cout<<*it<<" ";
	}
	
	cout<<"\n\n";
	
	
	//removing element from front of list
	list1.pop_front();
	
    for(auto it = list1.begin(); it!=list1.end(); it++)
    {
    	cout<<*it<<" ";
	}
	
	cout<<"\n\n\n\n";
	//after removing an element from list
	list1.remove(67);
	for(auto it = list1.begin(); it!=list1.end(); it++)
    {
    	cout<<*it<<" ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
