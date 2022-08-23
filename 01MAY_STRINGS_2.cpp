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

cout<<nm1.append(nm2+nm3)<<endl;

cout<<nm1+nm2<<endl;

	return 0;
}

