//wap to take input 3 strings print the largest??

#include <iostream>

using namespace std;

int main()
{
string nm1;
string nm2;
string nm3;

 cout<<"enter the name "<<endl;
getline (cin,nm1);

cout<<"enter the name "<<endl;
getline (cin,nm2);

cout<<"enter the name "<<endl;
getline (cin,nm3);

if(nm1.length()>nm2.length()&&nm1.length()>nm3.length())
{
	cout<<nm1<<"is the greatest string";
}
else if(nm2.length()>nm1.length()&&nm2.length()>nm3.length())
{
	cout<<nm2<<"is the greatest string";
}
else if(nm3.length()>nm1.length()&&nm3.length()>nm2.length())
{
	cout<<nm3<<"is the greatest string";
}

	return 0;
}

