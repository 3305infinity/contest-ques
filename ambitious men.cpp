#include<bits/stdc++.h>
using namespace std;
int main()
{	
//    int t;
//	cin>>t;
	int n;
//	for(int j=0;j<t;j++)
//	{	
	    cin>>n;
//	    cin>>k;
	    vector<int>v(n);   
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];
			if(v[i]<0)
			{
				v[i]=-1*v[i];
			  }  
	    }    
		sort(v.begin(),v.end());
		cout<<v[0]<<endl;
		
//	}
	return 0;
}



