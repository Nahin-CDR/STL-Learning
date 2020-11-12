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
	
	
	
	
	
	
	return 0;
}

