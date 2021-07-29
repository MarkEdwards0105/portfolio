//Write a C++ statement that includes the header file iostream
//Write a C++ statement that allows you to use cin, cout, and endl without the prefix std::
//Write a C++ statement that declare the following variables: num1, num2, num3, and average of type int
//Write a C++ statement that store 125 into num1, 28 into num2, and -25 into num3
//Write a C++ statement that stores the average of num1, num2, num3, into average
//Write a C++ statement that outputs the value of num1, num2, num3, and average
//compile the program

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, average;
	num1 = 125;
	num2 = 28;
	num3 = -25;
	average = (num1 + num2 + num3) / 3;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "num3: " << num3 << endl;
	cout << "average: " << average << endl;



	return 0;
}