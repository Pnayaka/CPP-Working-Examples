/*Beginning of NestedCall.cpp*/

class A
{
	int x;
	public:
		void setx(int);
		void setxindirect(int);
};

void A::setx(int p)
{
	x=p;
}

void A::setxindirect(int q)
{
	setx(q);
}

void main()
{
	A A1;
	A1.setxindirect(1);
}

/*End of NestedCall.cpp*/