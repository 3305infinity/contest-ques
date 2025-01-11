#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int row,col;
	// spiral matrix rotation and check 
	while(t--)
	{	
	    cin>>row>>col;
        int v[row][col];
	    for(int i=0;i<row;i++)
	    {
	    	for(int j=0;j<col;j++)
	    	{
	    		cin>>v[i][j];
			}
		}
		int n=row*col;
		int top=0;int bottom=n-1;int left=0;int right=col-1;int p=1;int c=0;
		while(top<=bottom && left<=right)
		{
//			int top=p-1;
//			int bottom=row-p;
//			int left=p-1;
//			int right=col-p;
			vector<int>temp;
			for(int i=left;i<=right;i++)
			{
				temp.push_back(v[top][i]);
			}
			top++;
			
			for(int i=top;i<=bottom;i++)
			{
				temp.push_back(v[i][right]);
			}
			right--;
			
			if(top<=bottom)
			{
				for(int i=right;i>=left;i--)
			    {
				     temp.push_back(v[bottom][i]);
			    }bottom--;
			}
			
			if(left<=right)
			{
				for(int i=bottom;i>=top;i--)
			    {
				     temp.push_back(v[i][left]);
			    }
			    left++;
			}
			
			for(int i=0;i<temp.size()-3;i++)
			{
				if(temp[i]==1 && temp[i+1]==5 && temp[i+2]==4 && temp[i+3]==3)
				c++;
			}
			
			if(temp[n-1]==1 && temp[1]==5 && temp[2]==4 && temp[3]==3)
				c++;
			if(temp[n-2]==1 && temp[n-1]==5 && temp[1]==4 && temp[2]==3)
				c++;
			if(temp[n-3]==1 && temp[n-2]==5 && temp[n-1]==4 && temp[1]==3)
				c++;
			p++;
			
		}
		cout<<c<<endl;
	}
	return 0;
}
