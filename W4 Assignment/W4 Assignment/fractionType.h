//BASE CLASS HEADER DEFINITION FILE
//fractionType base class

#pragma once

#ifndef FRACTION_H
#define FRACTION_H


#include <string>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;



template <typename T>						//T represents fraction type
class fractionType
{

public:

	//DEFAULT CONSTRUCTOR**********************************************************************************************
	fractionType()
	{
		T numerator = 0;

		T denominator = 0;

	};


	//PARAMETERIZED CONSTRUCTOR******************************************************************************************
	//fractionType(int, int);																	//without template
	
	
	fractionType(T userNumerator, T userDenominator)
	{
		numerator = userNumerator;

		denominator = userDenominator;

	};


	//CONSTANT MEMBER FUNCTIONS*****************************************************************************************

	//T getNumerator();


	template <typename T>																	//T is return type
	T getNumerator()
	{
		return numerator;

	};

	//T getDenominator();


	template <typename T>
	T getDenominator()			
	{


		return denominator;


	};

	
	//PUBLIC MEMBER VARIABLES*****************************************************************************************


	T numerator = 0;

	T denominator = 0;
};



//NON MEMBER FUNCTIONS******************************************************************






//************************************************************BOOLEAN OPERATORS**********************************************


template <typename T>
fractionType<T> operator==(const fractionType<T> numA, const fractionType<T> numB)
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad=cd, FALSE if not

	// a/b=c/d if ad=cb

	return ((numA.numerator * numB.denominator) == (numB.numerator * numA.denominator));


};






template <typename T>
fractionType<T> operator<(const fractionType<T> numA, const fractionType<T> numB)
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad<cd, FALSE if not

	// a/b < c/d if ad < cd

	return ((numA.numerator * numB.denominator) < (numB.numerator * numA.denominator));



};



template <typename T>
fractionType<T> operator<=(const fractionType<T> numA, const fractionType<T> numB)
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad<cd, FALSE if not

	// a/b <= c/d if ad <= cd

	return ((numA.numerator * numB.denominator) <= (numB.numerator * numA.denominator));



};



template <typename T>
fractionType<T> operator>(const fractionType<T> numA, const fractionType<T> numB)
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad>cd, FALSE if not

	// a/b > c/d if ad > cd

	return ((numA.numerator * numB.denominator) > (numB.numerator * numA.denominator));



};




template <typename T>
fractionType<T> operator>=(const fractionType<T> numA, const fractionType<T> numB)
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad>=cd, FALSE if not

	// a/b >= c/d if ad >= cd

	return ((numA.numerator * numB.denominator) >= (numB.numerator * numA.denominator));



};


template <typename T>
fractionType<T> operator!=(const fractionType<T> numA, const fractionType<T> numB)
{
	//PRECONDITION: a,b,c,d defined and no zero divisors
	//POSTCONDITION: return TRUE if ad!=cd, FALSE if not

	// a/b != c/d if ad != cd

	return ((numA.numerator * numB.denominator) != (numB.numerator * numA.denominator));



};


		
	//*******************************************************ARITHMETIC OPERATORS*****************************************************


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

			fractionType<T> sum(tempA, tempB);

			return sum;

		};



		template <typename T>
		fractionType<T> operator-(const fractionType<T> numA, const fractionType<T> numB)
		{
			//PRECONDITION: a,b,c,d defined and no zero divisors
			//POSTCONDITION: return subtraction result in form of FRACTION contained in nummeratorA and denominatorB

			// a/b - c/d = (ad - bc) / bd

			T tempA;

			tempA = (numA.numerator * numB.denominator) - (numB.numerator * numA.denominator);

			T tempB;

			tempB = numA.denominator * numB.denominator;

			fractionType<T> difference(tempA, tempB);

			return difference;

		};



		template <typename T>
		fractionType<T> operator/(const fractionType<T>& numA, const fractionType<T>& numB)
		{
			//PRECONDITION: a,b,c,d defined and no zero divisors
			//POSTCONDITION: return division result in form of FRACTION contained in nummeratorA and denominatorB

			// a/b / c/d =  ad / bc

			T tempA;

			tempA = (numA.numerator * numB.denominator);

			T tempB;

			tempB = numA.denominator * numB.numerator;

			fractionType<T> difference(tempA, tempB);

			return difference;

		};





		template <typename T>
		fractionType<T> operator*(const fractionType<T>& numA, const fractionType<T>& numB)
		{
			//PRECONDITION: a,b,c,d defined and no zero divisors
			//POSTCONDITION: return multiplication result in form of FRACTION contained in nummeratorA and denominatorB

			// a/b * c/d =  ac / bd


			T tempA;

			tempA = (numA.numerator * numB.numerator);

			T tempB;

			tempB = numA.denominator * numB.denominator;

			fractionType<T> difference(tempA, tempB);

			return difference;

		};



		//************************************************************STREAM OPERATORS************************************************

		template <typename T>
		ostream& operator << (ostream& COUT, fractionType<T>& source)
		{

			COUT << source.numerator << "/" << source.denominator << endl;



			return COUT;

		}

		template <typename T>
		istream& operator >> (istream& CIN, fractionType<T>& target)
		{

			CIN >> target.numerator;

			CIN >> target.denominator;


			return CIN;

		}



/*
		
		template< typename T>
		
		fractionType<T> operator+(fractionType<T>&, fractionType<T>&);						// a/b + c/d = (ad + bc) / bd
	

		
	template< typename T>

		fractionType<T> operator-(fractionType<T>&, fractionType<T>&);						// a/b - c/d = (ad - bc) / bd
	
	template< typename T>

		fractionType<T> operator/(fractionType<T>&, fractionType<T>&);						// a/b / c/d =  ad / bc
	
				
	template< typename T>

		fractionType<T> operator*(fractionType<T>&, fractionType<T>&);						// a/b * c/d =  ac / bd

*/



		//NO TEMPLATE VERSION---------------------------------------------------------------------------------------------------------------------------------


		//DEFAULT CONSTRUCTOR**********************************************************************************************
		/*fractionType()
		{
			numerator = 0;

			denominator = 0;

		};
		*/

		//PARAMETERIZED CONSTRUCTOR******************************************************************************************
		//fractionType(int, int);																	//without template

																	

		//CONSTANT MEMBER FUNCTIONS*****************************************************************************************

		/*
		int getNumerator();																			//without template

		int getDenominator();																		//without template
		*/	




		//PUBLIC MEMBER VARIABLES*********************************************************************************************

		//int numerator = 0;																		//without template

		//int denominator = 0;																		//without template



	/*
	* *****************************************************NONMEMBER FUNCTIONS*********************************************************
	* 
	******************************************************* BOOLEAN OPERATORS*******************************************************
	bool operator==(const fractionType&, const fractionType&);						// a/b = c/d if ad = cd
	bool operator<(const fractionType&, const fractionType&);						// a/b < c/d if ad < cd
	bool operator<=(const fractionType&, const fractionType&);						// a/b <= c/d if ad <= cd
	bool operator>(const fractionType&, const fractionType&);						// a/b > c/d if ad > cd
	bool operator>=(const fractionType&, const fractionType&);						// a/b >= c/d if ad >= cd
	bool operator!=(const fractionType&, const fractionType&);						// a/b != c/d if ad != cd

	*********************************************************ARITHMATIC OPERATORS*****************************************************
	fractionType<T> operator+(fractionType<T>&, fractionType<T>&);							// a/b + c/d = (ad + bc) / bd
	fractionType operator-(fractionType&, fractionType&);							// a/b - c/d = (ad - bc) / bd
	fractionType operator/(fractionType&, fractionType&);							// a/b / c/d =  ad / bc
	fractionType operator*(fractionType&, fractionType&);							// a/b * c/d =  ac / bd


	*********************************************************STREAM OPERATORS************************************************************
	std::ostream& operator << (std::ostream&, fractionType&);

	std::istream& operator >> (std::istream&, fractionType&);


	*/



#endif
	