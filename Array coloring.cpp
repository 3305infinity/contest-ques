//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{	
//    int t,row,col,k;
//	cin>>t;
//	int n;
//	for(int j=0;j<t;j++)
//	{	
//	    cin>>n;
//	    int odd=0;
//	    int even=0;
//	    vector<int>v(n);
//	    for(int i=0;i<n;i++)
//	    {
//	    	cin>>v[i];
//	    	if(v[i]%2==0)
//	    	even++;
//	    	else
//	    	odd++;
//	    }
//	    
//	    if(odd%2!=0)
//		{
//			cout<<"No"<<endl;
//	    	continue;
//		}
//		else
//		{
//			cout<<"Yes"<<endl;
//	    	continue;
//		}
//		
//	    
//	    
//	}
//	return 0;
//}
//
//
#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	   
	    vector<int>v(n);
	    int maxi=0;int mini=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];
	    	maxi=max(maxi,v[i]);
	    	mini=min(mini,v[i]);
	    }
	    // b will have the largest at the firt index and then it will have all the smallest in the rest indices but c will have te highest in rest indices so the formula pes as 
	    int ans=  (maxi-mini)*(n-1);
	    cout<<ans<<endl;
	}
	return 0;
}



