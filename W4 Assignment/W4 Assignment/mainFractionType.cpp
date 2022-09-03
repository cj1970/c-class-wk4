
// Week4 mainFractionType.cpp : This file contains the 'main' function.Program execution begins and ends here.


#include "fractionType.h"

#include <iostream>

#include <iomanip>

#include <string>

#include <stdlib.h>

using namespace std;

int main()

{

	

	fractionType<int> x,y,z;
	
	
	
	cout << "Enter first fraction: " << endl;
	
		cin >> x;
	
	cout << "Enter second fraction: " << endl;

	cin >> y;

	z = x + y;

	cout << "Result of first fraction + second fraction: " <<  z << endl;
	

		

	fractionType<int> a;

	fractionType<int> num1(5,6);

	fractionType<int> num2(3,4);
	
	a = num1 + num2;

	cout << "Result of 5/6 + 3/4 = " << a << endl << endl; 




fractionType<float> b;

	fractionType<float> num3(5.1, 6.2);

	fractionType<float> num4(3.2, 8.3);
	
	b = num3 + num4;

	cout << "Result of 5.1/6.2 + 3.2/8.3 = " << b << endl;




	return 0;


};

