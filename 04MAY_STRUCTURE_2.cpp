#include <iostream>

using namespace std;

struct student
{
 int roll_no;
 string nm;
int age;
float marks;	
};
int main()
{
student s1;
cout<<"enter the student nm";
cin>>s1.nm;

cout<<"enter the roll no.";
cin>>s1.roll_no;

cout<<"enter the age ";
cin>>s1.age;

cout<<"enter the marks";
cin>>s1.marks;

	return 0;
}

