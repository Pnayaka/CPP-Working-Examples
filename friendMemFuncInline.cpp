class A;

class B
{
	A * APtr;
	public:
		void Map(const A * const);
		void test_friend(const int=0);
};

class A
{
	int x;
	public:
		friend void B::test_friend(const int=0);
};

inline void B::test_friend(const int p)
{
	APtr->x=p;
}