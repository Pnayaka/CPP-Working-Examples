/*Beginning of memFuncOverload.cpp*/
#include<iostream.h>

class A
{
	public:
		void show();
		void show(int); //function show() overloaded!!
};

void A::show()
{
	cout<<“Hello\n”;
}
void A::show(int x)
{
	for(int i=0;i<x;i++)
		cout<<“Hello\n”;
}
void main()
{
	A A1;
	A1.show();	//first definition called
	A1.show(3); 	//second definition called
}

/*End of memFuncOverload.cpp*/