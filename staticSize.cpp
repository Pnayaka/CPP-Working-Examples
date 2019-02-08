#include<iostream.h>

class A
{
	int x;
	char y;	
	float z;
	static float s;
};

float A::s=1.1;

void main()
{
	cout<<sizeof(A)<<endl;
}
