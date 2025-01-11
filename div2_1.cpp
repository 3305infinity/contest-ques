#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int valx1,valx2,valy1,valy2=0;
	int xc,yc,k;
	for(int i=0;i<t;i++)
	{
		cin>>xc;
		cin>>yc;
		cin>>k;
		if(k==1)
		{
			cout<<xc<<" "<<yc<<endl;
		}
		else if(k%2==0)//even
		{
			for(int i=1;i<=k/2;i++)
			{
				 valx1=xc+5*i;
				 valx2=xc-5*i;
				 valy1=yc+5*i;
				 valy2=yc-5*i;
				cout<<valx1<<" "<<valy1<<endl;
				cout<<valx2<<" "<<valy2<<endl;
			}			
		}
		else//odd
		{
			cout<<xc<<" "<<yc<<endl;
			for(int i=1;i<=k/2;i++)
			{
				 valx1=xc+5*i;
				 valx2=xc-5*i;
				 valy1=yc+5*i;
				 valy2=yc-5*i;
				cout<<valx1<<" "<<valy1<<endl;
				cout<<valx2<<" "<<valy2<<endl;
			}	
		}
		
	}
	
	return 0;
}



