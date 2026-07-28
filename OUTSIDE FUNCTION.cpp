#include<iostream>
using namespace std;
class student{
	public:
		int rollno;
		string name;
		void show();
		void display();
};
    void student::show()
		{
			cout<<"Enter rollno:";
			cin>>rollno;
			cout<<"Enter name:";
			cin>>name;
		}
		void student::display()
		{
			cout<<"Rollno:"<<rollno<<endl;
			cout<<"Name:"<<name<<endl;
		}
int main()
{
	student s;
	s.show();
	s.display();
	return 0;
}
