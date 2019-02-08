/*Beginning of enclClassObj.h*/
class A
{
	public:
	void ATest();
	class B
	{
		public:
		void BTest(A&);
		void BTest1();
	};
};
/*End of enclClassObj.h*/

/*Beginning of enclClassObj.cpp*/
#include“enclClassObj.h”
void A::B::BTest(A& ARef)
{
	ARef.ATest(); //OK
}

void A::B::BTest1()
{
	ATest(); //ERROR!!
}
/*End of enclClassObj.cpp*/