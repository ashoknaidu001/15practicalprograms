#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4;
	float total,avg;
	cout<<"enter the marks in python "<<endl;
	cin>>m1;
	cout<<"enter the marks in c programming "<<endl;
	cin>>m2;
	cout<<"enter the marks in maths "<<endl;
	cin>>m3;
	cout<<"enter the marks in physics "<<endl;
	cin>>m4;
	total = m1+m2+m3+m4;
	cout<<"total marks "<<total<<endl;
	avg=total/4;
	cout<<"average marks "<<avg<<endl;
		if(avg>90)
		{
			cout<<"DISTICTION";
		}
		else if(avg<80&&avg>=60)
		{
			cout<<"GRADE-S";
		}
		else if(avg<70&&avg>=50)
		{
			cout<<"GRADE-A";
		}
		else if(avg<60&&avg>=40)
		{
			cout<<"GRADE-B";
		}
		else if(avg<50&&avg>=30)
		{
			cout<<"GRADE-C";
	    }
		
		else
		{
			cout<<"F-FAIL";
		}
}
