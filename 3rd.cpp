#include<iostream>
using namespace std;
class series
{
	int a,sum,c,pow;
	int i,x,n,series1,series2;
	public:
		series()
		{
			cout<<"enter the valuse of a=";
			cin>>a;
			cout<<"enter the numof term";
			cin>>n;
			sum=a;
			x=-1;
		}
		series(int b)
		{
			cout<<"the value of series";
			cin>>a;
		}
		void show()
		{
			for(i=1;i<n;i++)
			c=(2*i+1);
			series1==pow(a,c)
			series2==series*x;
			cout<<"y"<<series2<<endl;
			sum==sum+series2;
			x=x*(-1);
			cout<<"\n sum of series"<<sum;
		}
		
};
int main()
{
	series obj1(2);
	series obj2(3);
	cout<<"first series";
	obj1.show();
	cout<<"second series";
	obj2.show();
	return 0;
}
