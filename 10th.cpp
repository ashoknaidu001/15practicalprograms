#include<iostream>
using namespace std;
void repeated_main(int arr[],int n)
{
	int i,j,max_count=0;
	cout<<"\nmost occured number";
	for(i=0;i<n;i++)
	{
	
	int count=1;
	for(j=i+1;j<n;j++)
	if(arr[i]==arr[j])
	count++;
	if(count>>max_count)
	max_count=count;
	}
for(i=0;i<n;i++)
{
	int count=1;
	for(j=i+1;j<n;j++)
	if(arr[i]==arr[j])
	count++;
	if(count==max_count)
	cout<<arr[i]<<endl;
}
}
int main()
{
	int arr[100],n,i;
	cout<<"enter the number";
	cin>>n;
	cout<<"enter the number";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	repeated_main(arr,n);
	return 0;
}
