#include<iostream>
using namespace std;
class student
{
	char name[20];
	/p,c,m are subjects ohysics,chemistrty ,maths./
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
			cout<<a.name <<" SCORED MORE THAN "<<b.name<<endl;
		}
		else if(a.t<b.t)
		{
			cout<<b.name <<" SCORED MORE THAN "<<a.name<<endl;
		}
		else
		{
			cout<<a.name <<" AND "<<b.name<<" SCORED EQUAL!"<<endl;
		}
	}
	void c_physics(student a, student b)
	{	if(a.p>b.p)
		{
			cout<<a.name <<" SCORED MORE MARKS IN PHYSICS THAN  "<<b.name<<endl;
		}
		else if(a.p<b.p)
		{
			cout<<b.name <<" SCORED MORE MARKS IN PHYSICS THAN "<<a.name<<endl;
		}
		else
		{
			cout<<a.name <<" AND "<<b.name<<" SCORED EQUAL IN PHYSICS!"<<endl;
		}
	}
	void c_maths(student a, student b)
	{if(a.m>b.m)
		{
			cout<<a.name <<" SCORED MORE MARKS IN MATHS THAN "<<b.name<<endl;
		}
		else if(a.m<b.m)
		{
			cout<<b.name <<" SCORED MORE MARKS IN MATHS THAN "<<a.name<<endl;
		}
		else
		{
			cout<<a.name <<" AND "<<b.name<<" SCORED EQUAL IN MATHS!"<<endl;
		}
	}
	void c_chemistry(student a,student b)
	{if(a.c>b.c)
		{
			cout<<a.name <<" SCORED MORE MARKS IN CHEMISTRY THAN "<<b.name<<endl;
		}
		else if(a.m<b.m)
		{
			cout<<b.name <<" SCORED MORE MARKS IN CHEMISTRY THAN "<<a.name<<endl;
		}
		else
		{
			cout<<a.name <<" AND "<<b.name<<" SCORED EQUAL IN MATHS!"<<endl;
		}
	}
};
int main()
{
	student s1,s2,s3;
	s1.get("GARRY",50,60,70);
	s2.get("BRAHMAJEET",49,70,69);
	s3.c_physics(s1,s2);
	s3.c_chemistry(s1,s2);
	s3.c_maths(s1,s2);
	s3.compare(s1,s2);
	return(0);
}
