/*Beginning of memFuncDefault.cpp*/

#include<iostream.h>
class A
{
	public:
		void show(int=1);
};

void A::show(int p)
{
	for(int i=0;i<p;i++)
		cout<<“Hello\n”;
}

void main()
{
	A A1;
	A1.show(); 	//default value taken
	A1.show(3); 	//default value overridden
}

/*End of memFuncDefault.cpp*/