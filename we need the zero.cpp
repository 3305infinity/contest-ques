#include<bits/stdc++.h>
using namespace std;
int main()
{	int n;
    int t;
    cin>>t;
	while(t--)
	{	
	    cin>>n;int prod=0;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];
	    	  prod=prod^v[i];
        }
    if(prod==0)
    {
        cout<<0<<endl;
        continue;
    }
    if(n%2==0){
        cout<<-1<<endl;
         continue ;
    }
    cout<<prod<<endl;
   
		
	}
	return 0;
}

