#include <iostream>

using namespace std;

class library 
{
public:
string nm; 
int cost;
int item_no;

void input()
{
 
 cout<<"Enter item no"<<endl;
 cin>>item_no;
 cout<<"Enter cost "<<endl;
 cin>>cost;
}

void show()
{
	
	cout<<"\nItem No :"<<item_no<<endl;
	cout<<"\nCost :"<<cost<<endl;
}
};

class book:public library
{
int pages;
string author;

	public:

void input()
{
	library::input();
	
	cout<<"ENTER THE author NAME "<<endl;
	cin>>author;
	cout<<"Enter number of pages "<<endl;
	cin>>pages;

}

void show()
{
	library::show();
	
	cout<<"\nAuthor :"<<author<<endl;
	cout<<"\nPages :"<<pages<<endl;
}

};


class CD:public library
{
int ntrack;
float runtime;

	public:

void input()
{
	library::input();
	cout<<"ENTER number of tracks "<<endl;
	cin>>ntrack;
	cout<<"Enter running time "<<endl;
	cin>>runtime;

}

void show()
{
	library::show();
	cout<<"\nNumber of Tracks :"<<ntrack<<endl;
	cout<<"\nRunning Time :"<<runtime<<endl;
}

};


int main()
{
int ch;

 cout<<"WLECOME TO LIBRARY MANAGEMENT SYSTEM"<<endl;

cout<<"____________________________________"<<endl;
cout<<"ENTER THE CHOICE "<<endl;	

cout<<"\N 1.WANT TO ADD A BOOK"<<endl;
cout<<"\n 2.WANT TO ADD A CD"<<endl;
cin>>ch;

if(ch==1)
{
cout<<"YOU HAVE CHOSEN TO ADD A BOOK"<<endl;	
book b1;
b1.input();
b1.show();
}
else if(ch==2)
{
	CD C1;
	C1.input();
	C1.show();
}
else
{
cout<<"invalid input"<<endl;	

} 



	return 0;
}

