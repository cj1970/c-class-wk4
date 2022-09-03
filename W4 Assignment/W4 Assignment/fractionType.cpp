//BASE CLASS IMPLEMENTATION FILE WITHOUT TEMPLATES


#include "fractionType.h"

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;


//DEFAULT CONSTRUCTOR**********************************************************


/*
fractionType::fractionType()						//Without template
{
	T numerator = 0;

	T denominator = 0;

};
*/


//PARAMETERIZED CONSTRUCTOR**********************************************************
/*
fractionType::fractionType(int userNumerator, int userDenominator)			//Without template
{
	numerator = userNumerator;

	denominator = userDenominator;

};
*/
/*
template<typename T>
fractionType<T>::fractionType(T userNumerator, T userDenominator)
{
	numerator = userNumerator;

	denominator = userDenominator;

};

*/





//MEMBER FUNCTIONS*************************************************************************

/*
int fractionType::getNumerator()						//Without template
{
	return numerator;

};
*/






 /*
int fractionType::getDenominator()					//Without template
{
	
	
    return denominator;


};
*/
 
 


//NON MEMBER FUNCTIONS******************************************************************



 /*
  bool operator==(const fractionType& numA, const fractionType& numB)				//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad=cd, FALSE if not

	// a/b=c/d if ad=cb

	return ((numA.numerator * numB.denominator) == (numB.numerator * numA.denominator));
	

};
*/



/*
bool operator<(const fractionType& numA, const fractionType& numB)							//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad<cd, FALSE if not

	// a/b < c/d if ad < cd

	return ((numA.numerator * numB.denominator) <  (numB.numerator * numA.denominator));



};
*/



/*
bool operator<=(const fractionType& numA, const fractionType& numB)						//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad<cd, FALSE if not

	// a/b <= c/d if ad <= cd

	return ((numA.numerator * numB.denominator) <= (numB.numerator * numA.denominator));



};
*/




/*
bool operator>(const fractionType& numA, const fractionType& numB)								//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad>cd, FALSE if not

	// a/b > c/d if ad > cd

	return ((numA.numerator * numB.denominator) > (numB.numerator * numA.denominator));



};
*/



/*
bool operator>=(const fractionType& numA, const fractionType& numB)					//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad>=cd, FALSE if not

	// a/b >= c/d if ad >= cd

	return ((numA.numerator * numB.denominator) >= (numB.numerator * numA.denominator));



};
*/


/*
bool operator!=(const fractionType& numA, const fractionType& numB)								//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad!=cd, FALSE if not

	// a/b != c/d if ad != cd

	return ((numA.numerator * numB.denominator) != (numB.numerator * numA.denominator));



};
*/





/*
  template <typename T>
  fractionType<T> operator+(const fractionType<T> numA, const fractionType<T> numB)
  {
	  //PRECONDITION: a,b,c,d defined and no zero divisors
	  //POSTCONDITION: return addition result in form of FRACTION contained in numeratorA and denominatorB

	  // a/b + c/d = (ad + bc) / bd

	  T tempA;

	  tempA = (numA.numerator * numB.denominator) + (numB.numerator * numA.denominator);

	  T tempB;

	  tempB = numA.denominator * numB.denominator;

	  fractionType sum(tempA, tempB);

	  return sum;

  };

  */
/*
fractionType operator+( fractionType& numA,  fractionType& numB)											//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return addition result in form of FRACTION contained in numeratorA and denominatorB

	// a/b + c/d = (ad + bc) / bd

	int tempA;

	tempA = (numA.numerator * numB.denominator) + (numB.numerator * numA.denominator);

	int tempB;

	tempB = numA.denominator * numB.denominator;

	fractionType sum(tempA, tempB);

	return sum;

};
*/








/*
fractionType operator-(fractionType& numA, fractionType& numB)													//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return subtraction result in form of FRACTION contained in nummeratorA and denominatorB

	// a/b - c/d = (ad - bc) / bd

	int tempA;

	tempA = (numA.numerator * numB.denominator) - (numB.numerator * numA.denominator);

	int tempB;

	tempB = numA.denominator * numB.denominator;

	fractionType difference(tempA, tempB);

	return difference;

};

*/




  /*
fractionType operator/(fractionType& numA, fractionType& numB)												//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return division result in form of FRACTION contained in nummeratorA and denominatorB

	// a/b / c/d =  ad / bc

	int tempA;

	tempA = (numA.numerator * numB.denominator);

	int tempB;

	tempB =  numA.denominator * numB.numerator;

	fractionType difference(tempA, tempB);

	return difference;

};
*/



/*
fractionType operator*(fractionType& numA, fractionType& numB)												//without template
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return multiplication result in form of FRACTION contained in nummeratorA and denominatorB

	// a/b * c/d =  ac / bd


	int tempA;

	tempA = (numA.numerator * numB.numerator);

	int tempB;

	tempB = numA.denominator * numB.denominator;

	fractionType difference(tempA, tempB);

	return difference;

};
*/


/*
  template <typename T>
  ostream& operator << (ostream& COUT, fractionType<T>& source)
  {

	  COUT << source.numerator << endl;

	  COUT << source.denominator << endl;




	  return COUT;

  }

   template <typename T>
  istream& operator >> (istream& CIN, fractionType<T>& target)
  {

	  CIN >> target.numerator;

	  CIN >> target.denominator;


	  return CIN;

  }
  */
/*
std::ostream& operator << (ostream& COUT, fractionType& source)
{
	
	COUT << source.numerator << endl;

	COUT << source.denominator << endl;


	

	return COUT;

}

std::istream& operator >> (istream& CIN, fractionType& target)
{

	CIN >> target.numerator;

	CIN >> target.denominator;

	
	return CIN;

}
*/