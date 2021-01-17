#include<iostream>
#include<queue>

using namespace std;

int main()
{
	
	priority_queue<string>p;
	
	p.push("coder");
	p.push("nahin");
	p.push("linking park");
	p.push("sky");
	
	
	
	while(!p.empty())
	{
		cout<<p.top()<<" ";
		p.pop();
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
