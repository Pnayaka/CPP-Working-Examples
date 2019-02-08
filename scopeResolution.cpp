/*Beginning of scopeResolution.cpp*/

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

/*End of scopeResolution.cpp*/