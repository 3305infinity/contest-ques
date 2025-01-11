#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	while(t--)
	{	
	    int n;
	    cin>>n;
	 vector<int>v(n);
	 vector<int>e;
	 vector<int>o;
	 v[0]=2;
	 v[1]=1;
	 v[2]=3;
	 v[3]=4;
	 v[4]=5;
	 
	 int ei=0;int oi=0;
	 for(int i=6;i<=n;i=i+2)
	 {
	 	e.push_back(i);
	 }
	 for(int i=5;i<=n;i=i+2)
	 {
	 	o.push_back(i);
	 }
	 for(int i=5;i<n;i++)
	 {
	 	if(i%2==1)
	 	v[i]=e[ei++];
	 	else
	 	v[i]=o[oi++];
	 }
	 int k=0;
	 for(int i=0;i<n;i++)
	 {
	 	if(i%2==0)
	 	k=k&v[i];
	 	else
	 	k=k|v[i];
	 }
	 cout<<k<<endl;
	 for(int i=0;i<n;i++)
	 {
	 	cout<<v[i]<<" ";
	 }
	 cout<<endl;
	    
    }
	return 0;
}



