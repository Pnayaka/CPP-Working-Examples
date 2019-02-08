class Distance
{
	int iFeet;
	float fInches;
	public:
		void setFeet(int); 		//prototype only
		int getFeet(); 		//prototype only
		void setInches(float); 	//prototype only
		float getInches(); 		//prototype only
};

void Distance::setFeet(int x) //definition
{
	iFeet=x;
}
int Distance::getFeet() //definition
{
	return iFeet;
}
void Distance::setInches(float y) //definition
{
	fInches=y;
}
float Distance::getInches() //definition
{
	return fInches;
}


void main()
{
	Distance d1,d2;
	d1.setFeet(2);
	d1.setInches(2.2);
	d2.setFeet(3);
	d2.setInches(3.3);
	cout<<d1.getFeet()<<“ ”<<d1.getInches()<<endl;
	cout<<d2.getFeet()<<“ ”<<d2.getInches()<<endl;
}

/*End of Distmain.cpp*/