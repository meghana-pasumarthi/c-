#include<iostream>
using namespace std;
class student{
	public:
		int rollno;
		string name;
		void input()
		{
			cout<<"Enter rollno:";
			cin>>rollno;
			cout<<"Enter name:";
			cin>>name;
		}
		void display()
		{
			cout<<"Rollno:"<<rollno<<endl;
			cout<<"Name:"<<name<<endl;
		}
};
int main()
{
	student s;
	s.input();
	s.display();
	return 0;
}
