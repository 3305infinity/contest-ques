#include<bits/stdc++.h>
using namespace std;
int main()
{	int n;
    int t;
    cin>>t;
    int a,b,xk,yk,yq,xq;
	while(t--)
	{	
	   cin>>a>>b;
	   cin>>xk>>yk;
	   cin>>xq>>yq;
	   int c=0;
	   if(a==b)
	   {
	   	pair<int,int>c1=make_pair(xk+a,xk+b);
	    pair<int,int>c2=make_pair(xk-a,xk-b);   
	    pair<int,int>c3=make_pair(xk-a,xk+b);
	    pair<int,int>c4=make_pair(xk+a,xk-b);
	   
	    pair<int,int>d1=make_pair(xq+a,xq+b);
	    pair<int,int>d2=make_pair(xq-a,xq-b);
	    pair<int,int>d3=make_pair(xq-a,xq+b);
	    pair<int,int>d4=make_pair(xq+a,xq-b);
	   
	   if(c1==d1||c1==d2||c1==d3||c1==d4 )
	   c++;
	   if(c2==d1||c2==d2||c2==d3||c2==d4)
	   c++;
	   if(c3==d1||c3==d2||c3==d3||c3==d4 )
	   c++;
	   if(c4==d1||c4==d2||c4==d3||c4==d4 )
	   c++;
	   if(c1==c2|| c1==c3 || c1==c4 )
	   cout<<c-1<<endl;
	   else
	   cout<<c<<endl;
	   continue;
	   }
	   else
	   {
	   	pair<int,int>a1=make_pair(xk+a,xk+b);
	   pair<int,int>a2=make_pair(xk+b,xk+a);
	   pair<int,int>a3=make_pair(xk-a,xk-b);
	   pair<int,int>a4=make_pair(xk-b,xk-a);
	   
	   pair<int,int>a5=make_pair(xk-a,xk+b);
	   pair<int,int>a6=make_pair(xk-b,xk+a);
	   pair<int,int>a7=make_pair(xk+a,xk-b);
	   pair<int,int>a8=make_pair(xk+b,xk-a);
	   
	   pair<int,int>b1=make_pair(xq+a,xq+b);
	   pair<int,int>b2=make_pair(xq+b,xq+a);
	   pair<int,int>b3=make_pair(xq-a,xq-b);
	   pair<int,int>b4=make_pair(xq-b,xq-a);
	   
	   pair<int,int>b5=make_pair(xq-a,xq+b);
	   pair<int,int>b6=make_pair(xq-b,xq+a);
	   pair<int,int>b7=make_pair(xq+a,xq-b);
	   pair<int,int>b8=make_pair(xq+b,xq-a);
	   
	   if(a1==b1||a1==b2||a1==b3||a1==b4|| a1==b5||a1==b6||a1==b7||a1==b8 )
	   c++;
	   if(a2==b1||a2==b2||a2==b3||a2==b4 || a2==b5||a2==b6||a2==b7||a2==b8)
	   c++;
	   if(a3==b1||a3==b2||a3==b3||a3==b4 || a3==b5||a3==b6||a3==b7||a3==b8)
	   c++;
	   if(a4==b1||a4==b2||a4==b3||a4==b4 || a4==b5||a4==b6||a4==b7||a4==b8)
	   c++;
	    if(a1==a2|| a1==a3 || a1==a4 || a1==a5|| a1==a6|| a1==a7|| a1==a8)
	   cout<<c-1<<endl;
	   else
	   cout<<c<<endl;
	   }
	   
	  
	}
	return 0;
}

