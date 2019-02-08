/*Beginning of nestClassObj.h*/
class A
{
	class B
	{
		public:
		void BTest(); 	//prototype only
	};
	B B1;
	public:
		void ATest();
};
/*End of nestClassObj.h*/

/*Beginning of nestClassObj.cpp*/
#include“nestClassObj.h”
void A::ATest()
{
	B1.BTest();
	B B2;
	B2.BTest();
}
/*End of nestClassObj.cpp*/