class Distance
{
	int iFeet;
	float fInches;
	public:
		void setFeet(int); 		
		int getFeet(); 		
		void setInches(float); 	
		float getInches(); 		
		Distance add(Distance);
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

Distance Distance::add(Distance dd)
{
	Distance temp;
	temp.iFeet=iFeet+dd.iFeet; 	//legal to access both
				//temp.iFeet and
				//dd.iFeet
	temp.fInches=fInches+dd.fInches; //ditto
	return temp;
}

void main()
{
	Distance d1,d2,d3;
	d1.setFeet(1);
	d1.setInches(1.1);
	d2.setFeet(2);
	d2.setInches(2.2);
	d3=d1.add(d2);
	cout<<d3.getFeet()<<“’-”<<d3.getInches()<<“’’\n”;
}