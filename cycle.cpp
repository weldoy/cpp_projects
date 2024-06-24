#include <iostream>

using namespace std;

int main()
{
	int a,b=0,c=0,d=0;
	while (cin>>a && a!=0)
	{
		if (b>a && b>c && c!=0) d++;
		c=b;
		b=a;
	}
	cout<<d;
}
