#include<iostream>
using namespace std;
int fac(int a,int b)
{
	
	int t;
	if(b==1)
	   t=a;
	else
        t=a/b*fac(a-1,b-1);
    return(t);
}
 int main()
 {
	 int m;
	 int n;
	 cout<<"ÇëÊäÈëmºÍn"<<endl;
	 cout<<"m="<<endl;
	 cin>>m;
	 cout<<"n="<<endl;
	 cin>>n;
	 cout<<fac(m,n)<<endl;
	 system("pause");
	 return 0;
 }
