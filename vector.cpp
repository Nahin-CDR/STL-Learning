#include<iostream>
#include<vector>

//Coder : Nahin-CDR
//Date : 10-11-2020

using namespace std;

int main()
{
	vector< int > vec;
	
	//inserting elements into vector array
	for(int i=1; i<=10; i++)
	{
		vec.push_back(i);
	}
	
	//showing elements from that array
	for(auto it=vec.begin(); it!=vec.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n\n";
	//now showing it in reverse order
	
	for(auto it=vec.rbegin(); it!=vec.rend(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n\n";
	//checking if the vector is empty or non empty
	
	if(vec.empty())
	{
		cout<<"The vector is empty\n";
	}
	else
	{
		cout<<"The vector is not empty\nthe size of it is = "<<vec.size();
	}
	
	cout<<"\n\n";
	
	//showing the first element of vector
	cout<<"first element of vector is = "<<vec.front();
	
	cout<<"\n\n";
	
	//remove last element of vector
	vec.pop_back();
	for(auto it = vec.begin(); it!=vec.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	cout<<"\n\n";
	//insert an element at first in the vector

    vec.insert(vec.begin(),7);
    
    //after inserting 7 in first place of array
    for(auto it = vec.begin(); it!= vec.end(); it++)
    {
    	cout<<*it<<" ";
	}
	
	cout<<"\n\n";
	//now delete the first element of vector
	
	vec.erase(vec.begin());
	
	//after erasing the vector is
    for(auto it = vec.begin(); it!= vec.end(); it++)
    {
    	cout<<*it<<" ";
	}
    
    cout<<"\n\n\n";
    
    
    //now erase the vector
    vec.clear();
    cout<<"The vector size after erasing = "<<vec.size();
    
    
    
    

	
    
	
	
	
	
	
	
	return 0;
}
