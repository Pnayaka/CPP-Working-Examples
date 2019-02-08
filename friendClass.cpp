/*Beginning of friendClass.cpp*/
class B; 		//forward declaration… necessary because
		//definition of class B is after the statement
		//that declares class B a friend of class A.
class A
{
	int x;
	public:
		void setx(const int=0);
		int getx()const;
		friend class B; //declaring B as a friend of A
};

class B
{
	A * APtr;
	public:
		void Map(A * const);
		void test_friend(const int);
};

void B::Map(A * const p)
{
	APtr = p;
}

void B::test_friend(const int i)
{
	APtr->x=i; //accessing the private data member
}

/*End of friendClass.cpp*/