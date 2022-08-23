#include <iostream>

using namespace std;

struct employee
{
	int eid;
	string nm;
	double ph_no;
	float salary;
};
int main()
{
employee e1;

cout<<"enter the id of the employee"<<endl;
cin>>e1.eid;

cout<<"enter the name employee"<<endl;
 cin>>e1.nm;

cout<<"enter the phone no. of an employee"<<endl;
cin>>e1.ph_no;

cout<<"enter the salary of employee"<<endl;
cin>>e1.salary;

cout<<e1.eid<<endl;
cout<<e1.nm<<endl;
cout<<e1.ph_no<<endl;
cout<<e1.salary<<endl;

	return 0;
}

