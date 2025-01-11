#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n,rows;
	for(int j=0;j<t;j++)
	{	

	    string s,t;
	    cin>>s;
	    cin>>t;
	    int c=0;
	    for(int i=0;i<s.length();i++)
	    {
	    	if(s[i]==t[i])
			{
				c++;
			}	    
			else
			break;	
		}
//		cout<<"the c in middle is "<<c<<endl;
		if(c==0)
		{
			c+=s.length()+t.length();
		}
		else
		{
			c+=s.length()-c+t.length()-c+1;
		}
		cout<<c<<endl;
	    
	}		
	return 0;
}


