#include<iostream>
using namespace std;
int main()
{
	float C;
	float f;

	cout<<"请输入摄氏度C"<<endl;

	cin>>C;
	f=C*9/5+32;
	cout<<"华氏度为：";
	cout<<f;
	system("pause");
	return 0;

}