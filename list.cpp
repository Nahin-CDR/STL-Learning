#include<iostream>
#include<list>
using namespace std;

void showList(list<int> mylist)
{
	//list < int > :: iterator;
	for(auto it=mylist.begin(); it!=mylist.end(); it++)
	{
		cout<<*it<<" ";
	} 
}



int main()
{
	list< int > list1,list2;
	
	for(int i=1; i<=10; i++)
	{
		list1.push_back(i*2);	
		list2.push_back(i*3);
	}
	
	
	cout<<"List no 1 :\n";
	showList(list1);
	cout<<"\n\nList no 2 :\n";
	showList(list2);
	
    cout<<"\n\nOperation for list : 1\n";
    cout<<"1 no element of list 1 = "<<list1.front()<<"\n";
    cout<<"last element of list 1 = "<<list1.back()<<"\n\n";
    
    
    cout<<"\n\nOperation for list : 2\n";
    cout<<"1 no element of list 2 = "<<list2.front()<<"\n";
    cout<<"last element of list 2 = "<<list2.back()<<"\n\n\n";
    
    
    cout<<"Removed first element from list 1\n:";
    list1.pop_front();
    showList(list1);
    
    cout<<"\n\n\n";
    
    cout<<"Removed last element from list 1\n:";
    list1.pop_back();
    showList(list1);
    
    cout<<"\n\n\n";
    cout<<"Reveresed list no 1: \n\n";
    list1.reverse();
    showList(list1);
    
    cout<<"\n\n\n\n";
    
     
    list1.sort();
    showList(list1);
    
    
    
    
    
    
    
    


	
	
	return 0;	
}
