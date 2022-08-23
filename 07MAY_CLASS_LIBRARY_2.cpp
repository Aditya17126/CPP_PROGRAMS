#include <iostream>

using namespace std;

int main()
{
class Mukesh_ambani
{

public:	
 
 double amount;
string industries;
 
 Mukesh_ambani ()
 {
 
	amount=99999999999;
		industries="reliance industries";
}
	void input()
	{
		cout<<"Enter amount ";
		cin>>amount;
		cout<<"Enter Industry name ";
		cin>>industries;
	}
};

class  Aakash:public Mukesh_ambani
{
	public:
		void show()
		{
			cout<<"\nI have this much Amount :"<<amount;
			cout<<"\nI am owner of "<<industries;
		}
};

class Prithvi:public Aakash
{
	public:
	void show()
	{
		cout<<"i have this much  amount of money"<<amount<<endl;
       cout<<"\nI am owner of "<<industries<<endl;
		
	}
};

int main()
{
	Aakash A; //this statements calls constructor
	A.show(); //show data
	
	A.input(); //overwrite data
	A.show();
	
   Prithvi p;
	p.show();
	
	p.input();
	p.show();
	
	return 0;
}


