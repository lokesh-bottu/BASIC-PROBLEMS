#include<iostream>
using namespace std;
int main()
{
	int arr []= {1,20,0,6,0,0,3,4,0,46,0,6,7,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	int count =0;
	for(int i=0;i<n-count;i++)
	{
		if(arr[i]==0)
		{
			count +=1;
			for(int j =i;j<n-count;j++)
			{
				arr[j]=arr[j+1];
			}
			arr[n-count]=0;
			i = i-1;
		}	
	}
	for(int k =0;k<n;k++)
		cout<<arr[k]<<" ";
	cout<<endl;
	
}
