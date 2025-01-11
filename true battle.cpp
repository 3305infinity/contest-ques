#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;string s;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	    cin>>s;
	    bool alicewins=false;
	    if(s[0]=='1'|| s[n-1]=='1')
	    {
	    	cout<<"Yes"<<endl;
	    	continue;
		}
	    for(int i=1;i<n-1;i++)
	    {
	    	if(s[i]=='1' && s[i+1]=='1' )
	    	{
	    		alicewins=true;
	    		break;
			}
		}
		if(alicewins)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
		
	}
	return 0;
}



