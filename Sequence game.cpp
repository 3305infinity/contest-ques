#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	cin>>n;
	    vector<int>vika(n);
	    int m=0;
	    int c=1;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>vika[i];
		}
	    vector<int>tema;
	    tema.push_back(vika[0]);
	    for(int i=1;i<n;i++)
	    {
	    	if(vika[i]>=vika[i-1])
	    	{
	    		tema.push_back(vika[i]);
	    		
	    		c++;
			}
			else
			{
				if(min(vika[i-1],vika[i])-1!=0)
				tema.push_back(min(vika[i-1],vika[i])-1);
				else
				tema.push_back(1);
				tema.push_back(vika[i]);
				c+=2;
			}	
		}
//		tema.push_back(vika[n-1]);
		cout<<c<<endl;
		for(int i=0;i<c;i++)
		cout<<tema[i]<<" ";
		cout<<endl;
	}
	return 0;
}



