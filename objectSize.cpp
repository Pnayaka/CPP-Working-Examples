/*Beginning of objectSize.cpp*/

#include<iostream.h>

struct A
{
	char a;
	int b;
	float c;
};

class B 		//a class with the same data members
{
	char a;
	int b;
	float c;
};

void main()
{
	cout<<sizeof(A)<<endl<<sizeof(B)<<endl;
}

/*End of objectSize.cpp*/