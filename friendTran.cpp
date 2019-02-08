class B;
class C;

/*Beginning of friendTran.cpp*/
class A
{
	friend class B;
	int a;
};

class B
{
	friend class C;
};

class C
{
	void f(A * p)
	{
		p->a++; //error: C is not a friend of A
			//despite being a friend of a friend
	}
};

/*End of friendTran.cpp*/