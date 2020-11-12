#include<iostream>
#include<array>

using namespace std;

int main()
{
	array<int,8>arr={1,3,45,6,7,8,88,7};
	
    
	
	
	for(int i=0; i<5; i++)
	{
		cout<<arr.at(i)<<" ";
	}
	
	
	cout<<"\n\n\n\n\n";
	
	cout<< "At index 2 = "<< get<2>(arr);
	cout<<"\n";
	
	cout<<"Array Size = "<<arr.size();
	
	cout<<endl;
	
	cout<<"First element = "<<arr.front();
	cout<<endl;
	cout<<"Last element = "<<arr.back();
	
	
	//creating another array
	array <int,8> arr2 = {20,60,30,20,70,90,40,80};
	cout<<"\n\nPrinting 2nd array : \n";



	for(int i =0; i<8; i++)
	{
		cout<<arr2.at(i)<<" ";
	}
	
	//swaping array
	
    arr2.swap(arr);

	
	for(int i =0; i<8; i++)
	{
		cout<<arr2.at(i)<<" ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

