#include <iostream>

using namespace std;

class tour
{
int no_adults;
int no_kids;
int km;
float total_fare;
string tcode;
public:
	
tour()
{
 tcode =null;
no_adults=0;
no_kids=0;
km=0;
total_fares=0;
}
void show()
{
	cout<<tcode;
	cout<<no_adults;
	cout<<no_kids;
	cout<<km;
	cout<<total_fares;
	
}

};



int main()
{
tour t1;
t1.show;


	return 0;
}

