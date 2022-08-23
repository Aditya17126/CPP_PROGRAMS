#include <iostream>

using namespace std;

int main()
{
char nm1[100];

cout<<"enter the name"<<endl;
gets(nm1);
cout<<nm1<<endl;


int small=0,cap=0,vow=0,digits=0,space=0,special=0;
int i;


for(i=0;nm1[i]!='\0';i++)
{
	if(nm1[i]>='a'&&nm1[i]<='z')
	{
		small++;
	}
	
else if(nm1[i]>='A'&&nm1[i]<='Z')
	{
		cap++;
	}
else if(nm1[i]>='0'&&nm1[i]<='9')
	{
		digits++;
	}
else if(nm1[i]=='A'||nm1[i]=='E'||nm1[i]=='I'||nm1[i]=='O'||nm1[i]=='U'||nm1[i]=='a'||nm1[i]=='e'||nm1[i]=='i'||nm1[i]=='o'||nm1[i]=='u')
	{
		vow++;
	}
	
else if(nm1[i]==' ')
	{
		space ++;
	}
else 
	{
		special ++;
	}
																							
}
cout<<"total no. of small letters are ="<<small<<endl; 
cout<<"total no. of capital letters are ="<<cap<<endl; 
cout<<"total no. of vowels letters are ="<<vow<<endl; 
cout<<"total no. digits are ="<<digits<<endl; 
cout<<"total no. sapces are ="<<space<<endl; 
cout<<"total no. of special char are ="<<special<<endl; 
cout<<"total no. of ALPHABETS are ="<<small+cap<<endl; 

	return 0;
}

