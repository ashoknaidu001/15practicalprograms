#include<iostream>
using namespace std;
int add( int ,int);
float add(float ,float);
int main()
{
	int a,b,x;
	float c,d,y;
	cout<<"enter the two integer";
	cin>>a>>b;
	x=add(a,b);
	cout<<x;
	cout<<"enter the two numbers";
	cin>>c>>d;
	y=add(c,d);
	cout<<y;
	return 0;
}
int add(int x,int y)
{
	int sum;
	sum= x+ y;
	return sum;
	
}
float add(float x,float y)
{
	float sum;
	sum=x+y;
	return sum;
}
