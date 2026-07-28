#include<iostream>
using namespace std;
namespace A
{
	void display(){
		cout<<"Display from namespace A\n";
	}
}
namespace B{
	void display(){
		cout<<"Display from namespace B\n";
	}
}
int main()
{
	A::display();
	B::display();
	return 0;
}
