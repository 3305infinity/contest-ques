#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	int k,l,r;
	while(t--)
	{	
	   cin>>l>>r>>k;
//	   if(k>(r-l+1))
//	   {
//	   	cout<<0<<endl;
//	   	continue;
//	   }
	   if(k==1)
	   {
	   	cout<<(r-l+1)<<endl;
	   	continue;
	   }
	   int ans=l;int mid=l;
	   int low=l;int high=r;
	   while(low<high)
	   {
	   	   mid=(low+high)/2;
	   	  int m=(r-mid)/mid+1;
	   	  if(m>=k)
	   	  {
	   	  	low=mid+1;
	   	  	ans=max(ans,mid+1);
	   	  }
	   	  else 
	   	  {
	   	  	high=mid;
		  }
	   }
//	   if(ans!=l)
	   cout<<ans-l<<endl;
//	   else
//	   cout<<0<<endl;
	}
	return 0;
}
