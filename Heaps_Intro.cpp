#include<iostream>
using namespace std;
class heap{
	public:
		int arr[10000];
		int size=0;
		// in heap the parent index if suppose we consider i the nodes index is left =2*i and right = 2*i+1 if indexing is from 1
		// if indexing is from 0then the indexes goes like left = 2*i+1 and right =2*i+2
		heap(){
			size=0;
			arr[0]=-1;
		}
		void insert(int val)
		{
			size=size+1;
			int index=size;
			arr[index]=val;
			while(index>1)
			{
				int parent=index/2;
				if(arr[parent]<arr[index])
				{
					swap(arr[index],arr[parent]);
					index=parent;
				}
				else
				{
					return ;
				}
			}
		}
		void print()
		{
			for(int i=1;i<=size;i++)
			{
				cout<<arr[i]<<"  ";
			}
			cout<<endl;
		}
		void delete()
		{
			if(size==0)
			{
				cout<<"nothing to delete"<<endl;
				return;
			}
			// write the elment placed at last node at first node and then adjust its value in the heap properly 
			arr[1]=arr[size];
            size--;
			int i=1;
			while(i<size)
			{
				int left=2*i;
				int right=2*i+1;
				if(left && arr[i]<arr[left])
				{
					swap(arr[i],arr[left]);
					i=left;
				}
				else if(right && arr[i]<arr[right])
				{
					swap(arr[i],arr[right]);
					i=left;
				}
				else
				{
					return;
				}
			}			
		}
};
int main()
{
	heap h;
	h.insert(50);
	h.insert(55);
	h.insert(53);
	h.insert(52);
	h.insert(54);
	h.print();
	
	h.delete();
	h.print();
	
	return 0;
}
