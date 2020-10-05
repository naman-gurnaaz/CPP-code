#include<iostream>
using namespace std;
class student
{
	char name[20];
	/*p,c,m are subjects ohysics,chemistrty ,maths.*/
	float p,c,m,t;
	public:
	void get(char a[20],int y,int x,int z)
	{
		for(int i=0;i<21;i++)
		{
			name[i]=a[i];
		}
		p=y;
		c=x;
		m=z;
		t=p+c+m;
	}
	void compare(student a, student b)
	{
		if(a.t>b.t)
		{
			cout<<a.name <<" scored more marks than "<<b.name<<endl;
		}
		else if(a.t<b.t)
		{
			cout<<b.name <<" scored more marks than "<<a.name<<endl;
		}
		else
		{
			cout<<a.name <<" and "<<b.name<<" scored equal!"<<endl;
		}
	}
	void c_physics(student a, student b)
	{	if(a.p>b.p)
		{
			cout<<a.name <<" scored more marks in physics than "<<b.name<<endl;
		}
		else if(a.p<b.p)
		{
			cout<<b.name <<" scored more marks in physics than "<<a.name<<endl;
		}
		else
		{
			cout<<a.name <<" and "<<b.name<<" scored equal in physics!"<<endl;
		}
	}
	void c_maths(student a, student b)
	{if(a.m>b.m)
		{
			cout<<a.name <<" scored more marks in maths than "<<b.name<<endl;
		}
		else if(a.m<b.m)
		{
			cout<<b.name <<" scored more marks in maths than "<<a.name<<endl;
		}
		else
		{
			cout<<a.name <<" and "<<b.name<<" scored equal in maths!"<<endl;
		}
	}
	void c_chemistry(student a,student b)
	{if(a.c>b.c)
		{
			cout<<a.name <<" scored more marks in chemistry than "<<b.name<<endl;
		}
		else if(a.m<b.m)
		{
			cout<<b.name <<" scored more marks in maths than "<<a.name<<endl;
		}
		else
		{
			cout<<a.name <<" and "<<b.name<<" scored equal in maths!"<<endl;
		}
	}
};
int main()
{
	student s1,s2,s3;
	s1.get('GARRY',50,60,70);
	s2.get('BRAHMAJEET',49,70,69);
	s3.c_physics(s1,s2);
	s3.c_chemistry(s1,s2);
	s3.c_maths(s1,s2);
	s3.compare(s1,s2);
	return(0);
}
