#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
//      vector<int,vector<int>> v(10,vector<int>(10));
        int n=10;
        vector<vector<char>> v(n, vector<char>(n));
        int fac=0;
        int sum=0;
        for(int i=0;i<10;i++)
        {
        	
        	for(int k=0;k<10;k++)
        	{
        		cin>>v[i][k];
        		if(i==0 || k==0 || k==9||i==9)
        		fac=1;
        	    else if(i==1 && k>0 && k<n-1 || k==1 && i>0 && i<n-1 || k==8 && i>0 && i<n-1 ||i==8  && k>0 && k<n-1)
        		fac=2;
				else if(i==2 && k>1 && k<n-2 || k==2 && i>1 && i<n-2 || k==7 && i>1 && i<n-2 ||i==7  && k>1 && k<n-2)
        		fac=3;
				else if(i==3 && k>2 && k<n-3 || k==3 && i>2 && i<n-3 || k==6 && i>2 && i<n-3 ||i==6  && k>2 && k<n-3)
        		fac=4;
				else if(i==4 && k>3 && k<n-4 || k==4 && i>3 && i<n-4 || k==5 && i>3 && i<n-4 ||i==5  && k>3 && k<n-4)
        		fac=5;
			    if(v[i][k]=='X')
			    sum=sum+fac;    
			}
			
		}
		cout<<sum<<endl;
    }
    return 0;
}
