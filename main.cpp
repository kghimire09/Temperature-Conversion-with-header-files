#include <iostream>
#include "temperature.h"

using namespace std; 
//using namespace temperature; 



int main()
{
	double c = temperature::to_celsius(32); 
	cout << "Celsius: " << c << endl; 

	double f = temperature::to_fahrenheit(1); 
	cout << "Fahrenheit: " << f << endl; 
	system("pause"); 
	return 0; 
}