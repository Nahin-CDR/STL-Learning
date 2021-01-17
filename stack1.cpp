#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<string>s;
	
	s.push("nahin");
    s.push("cataloge");
    s.push("coder");
    
	while(!s.empty())
	{
		cout<<s.top()<<"\n";
		s.pop();
	}
	
	
	
	
	
	
	
	return 0;
}
