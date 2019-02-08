/*Beginning of nestClassDef.h*/
class A
{
	public:
	class B
	{
		public:
		void BTest(); 	//prototype only
	};
	/*
	definition of class A
	*/
};

/*End of nestClassDef.h*/

/*Beginning of nestClassDef.cpp*/

#include“nestClassDef.h”
void A::B::BTest()
{
	//definition of A::B::BTest() function
}
/*
definitions of the rest of the functions of class B
*/

/*End of nestClassDef.cpp*/