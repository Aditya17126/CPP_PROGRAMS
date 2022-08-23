#include <iostream>

using namespace std;

int main()
{
string nm1;
string nm2; 

cout<<"enter the name"; 
 getline (cin,nm1);

cout<<"enter the name ";
getline (cin,nm2);


cout<<nm1.length()<<endl;
cout<<nm1.compare(nm2)<<endl;

cout<<nm2.length()<<endl;
cout<<nm2.compare(nm1)<<endl;

if(nm1.length()>nm2.length())
{
cout<<nm1<<"greater then"<<nm2;
}
else if(nm2.length()>nm1.length())
{
cout<<nm2<<"greater then"<<nm1;
}

	return 0;
}

