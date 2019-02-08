/*Beginning of friend.cpp*/

class A
{
	int x;
	public:
	friend void abc(A&);		//prototype of the friend function
};

void abc(A& AObj) //definition of the friend function
{
	AObj.x++; 		//accessing private members of the object
}
void main()
{
	A A1;
	abc(A1);
}

/*End of friend.cpp*/