#include <iostream>

using namespace std;

int main()
{

	int n;
	
cout<<"enter the n";
cin>>n;

char nm1[n+1];

cout<<"enter the name "<<endl;

gets(nm1);

cout<<nm1;
 
 for(int i=n-1;i>=0;i--)
{
cout<<nm1[n]; 	
 	
 	
 }


	return 0;
}

