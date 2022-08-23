#include <iostream>
  
using namespace std;

union student
{
	int roll_no;
    char nm[100];
	int age;
	float mark;
};
int main()
{
student s1;

cout<<"enter the name ";
cin>>s1.nm;

cout<<"enter the roll no";
cin>>s1.roll_no;

cout<<"enter the age ";
cin>>s1.age;

cout<<"enter the mark ";
cin>>s1.mark;


cout<<s1.nm<<endl;
cout<<s1.roll_no<<endl;
cout<<s1.age<<endl;
cout<<s1.mark<<endl;

	return 0;
}

