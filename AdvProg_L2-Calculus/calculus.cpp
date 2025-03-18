#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double myCos(double x) 
{
	double result = 0.0;
	for (int i = 0; i < 15; i++)
	{
		result += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
	}
	return result;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
	double result = 0.0;
    for (int i = 0; i < 15; i++)
    {
		result += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    return 0.0;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }
    else
    {
		double result = x;
		double epsilon = 0.00001;
		while (abs(result * result - x) > epsilon)
		{
			result = (result + x / result) / 2;
		}
		return result;

   
}