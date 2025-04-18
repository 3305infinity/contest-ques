#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;string s;
    	cin>>n;
    	cin>>s;
    	int c=0;
    	for(int i=0;i<n-1;i++)
    	{
    		if(s[i+1]!=s[i])
    		c++;
		}
		if(s[0]=='1')
		cout<<c+1<<endl;
		else
		cout<<c<<endl;
	}
}
