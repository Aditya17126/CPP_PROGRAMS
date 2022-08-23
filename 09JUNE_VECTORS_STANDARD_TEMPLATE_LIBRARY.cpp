#include <iostream>
#include <vector>

using namespace std;
template<class T>
void display(vector<T> &v)
{

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
	}
	cout<<endl;
}
int main()
{
	int size,element;
vector<int>vec1;
cout<<"enter the size of the vector";
cin>>size;

for(int i=0;i<size;i++)
{
	cout<<"enter an element"<<endl;
	cin>>element;
	vec1.push_back(element);
}
vec1.pop_back();// it is used to eliminate the last element.
vector<int>::iterator iter =vec1.begin();
vec1.insert(iter+6,54);

display(vec1);

//vector<int>vec2;

//vec2.push_back(3);

//display (vec2);
	return 0;
}

