#include <iostream>

using namespace std;

int swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	return a;
	return b;
}
int main()
{
int a,b;
cout<<"enter the two values ";
cin>>a>>b;
cout<<swap(a,b);


	return 0;
}

