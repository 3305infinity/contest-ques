
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,row,col,k;
	cin>>t;
	int n;
	vector<int>ans;
	for(int i=0;i<t;i++)
	{	cin>>row;
     	cin>>col;
     	cin>>k;
     	int ans=0;
     	int p=row;
     	int q=col;
     	if(p*q<k)
     	{
		  ans=p*q;
     	  cout<<ans<<endl;
     	  continue;
		}
     	if(row>k)
     	p=k;
     	else
     	p=row;
     	if(col>k)
     	q=k;
     	else
     	q=col;
     	ans=p*q;
     	cout<<ans<<endl;		
	}
	return 0;
}



