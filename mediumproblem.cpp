#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;string s;
	for(int j=0;j<t;j++)
	{	
	    cin>>s;
	    reverse(s.begin(),s.end());
	    for(int i=0;i<s.length();i++)
	    {
	    	if(s[i]=='p')
	    	s[i]='q';
	    	else if(s[i]=='q')
	    	s[i]='p';
		}
		cout<<s<<endl;
	    
	}
	return 0;
}



