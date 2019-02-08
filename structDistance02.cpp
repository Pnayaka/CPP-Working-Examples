/*Beginning of structDistance02.cpp*/

#include<iostream.h>

struct Distance
{
	private:
		int iFeet;
		float fInches;
	public:

	void setFeet(int x)
	{
		iFeet=x; //LEGAL: private member accessed by
			//member function
	}
	int getFeet()
	{
		return iFeet;
	}
	void setInches(float y)
	{
		fInches=y;
	}
	float getInches()
	{
		return fInches;
	}
};

void main()
{
	Distance d1,d2;
	d1.setFeet(2);
	d1.setInches(2.2);
	d2.setFeet(3);
	d2.setInches(3.3);
	d1.iFeet++; //ERROR!!: private member accessed by
	//non-member function
	cout<<d1.getFeet()<<“ ”<<d1.getInches()<<endl;
	cout<<d2.getFeet()<<“ ”<<d2.getInches()<<endl;
}

/*End of structDistance02.cpp*/