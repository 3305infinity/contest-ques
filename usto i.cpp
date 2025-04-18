#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
		    if(s.substr(i)=="us")
		    {
		    	s=s.substr(0,i)+"i";
		    	break;
			}
		}
		cout<<s<<endl;
		
	}

}

