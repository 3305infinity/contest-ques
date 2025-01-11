//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{	
//    int t;
//	cin>>t;
//	while(t--)
//	{	
//	    int x,y,k;
//	    cin>>x>>y>>k;
//	    int mini=min(x,y);
//	    double k1=k/sqrt(2);
//	    int m=ceil(k1);
//	    cout<<"0 0 "<<m<<" "<<m<<endl;
//	    cout<<0<<" "<<m<<" "<<m<<" "<<0<<endl;
//    }
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
	while(t--)
	{	
	    int x,y,k;
	    cin>>x>>y>>k;
	    if(k<=x && k<=y)
	    {
	    	
	    cout<<"0 0 "<<k<<" "<<0<<endl;
	    cout<<"0 0 0 "<<k<<endl;
	    continue;
		}
		if(k>x && k<=y)
	    {
	    	
	    cout<<"0 0 "<<x<<" "<<x<<endl;
	    cout<<0<<" "<<x<<" "<<x<<" "<<0<<endl;
	    continue;
		}
	    if(k<=x && k>y)
	    {
	    	
	    cout<<"0 0 "<<y<<" "<<y<<endl;
	    cout<<0<<" "<<" "<<y<<" "<<y<<" "<<0<<endl;
	    continue;
		}
		if(k>x && k>y)
	    {
	    	int mini=min(x,y);
	    cout<<"0 0 "<<mini<<" "<<mini<<endl;
	    cout<<0<<" "<<mini<<" "<<mini<<" "<<0<<endl;
	    continue;
		}
    }
	return 0;
}




