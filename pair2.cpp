#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<pair<string,int>>vec;
	
	vec.push_back(make_pair("coder",101));
	vec.push_back(make_pair("link",102));
	vec.push_back(make_pair("the",103));
	vec.push_back(make_pair("sky",104));
	
	cout<<"showing output using for loop normally: \n\n";
	for(int i=0; i<vec.size(); i++)
	{
		cout<<vec[i].first<<" : "<<vec[i].second<<"\n";
	}
	
	
	cout<<"\n\nshowing output using iterator : \n\n";
	vector<pair<string,int>>::iterator it;
	
	for(it = vec.begin(); it != vec.end(); it++)
	{
		cout<<it->first<<" : "<<it->second<<endl;
	}
	
	
	
	
	
	
	return 0;
}
