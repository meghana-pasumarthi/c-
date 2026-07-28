#include<iostream>
using namespace std;
namespace nsp1
{
	int x=10;
}
namespace nsp2
{
	int x=20;
}
int main()
{
	cout<<"x="<<nsp1::x<<endl;
	cout<<"x="<<nsp2::x<<endl;
}
