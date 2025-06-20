#include <iostream>

#include "ImaginaryNumber.h"

using std::cout;
using std::endl;

int main() {
	double tmp_real = 0;
	double tmp_imaginary = 0;
	bool tmp_compare_result = 0;
	ImaginaryNumber tmp_number;

	cout << "Creating 4 imaginary numbers. ImaginaryNumber(2, 2), ImaginaryNumber(), ImaginaryNumber(-5, 3), ImaginaryNumber(0, -1)" << endl;
	ImaginaryNumber first_nubmer(2, 2);
	ImaginaryNumber second_nubmer;
	ImaginaryNumber third_nubmer(-5, 3);
	ImaginaryNumber fourth_nubmer(0, -1);
	cout << "Printing all numbers. Expecting:\n2+2i\n0\n-5+3i\n-i\nResults:" << endl;
	first_nubmer.printNumber();
	second_nubmer.printNumber();
	third_nubmer.printNumber();
	fourth_nubmer.printNumber();

	cout << "\nGetting the real and imaginary parts of the third number. Expecting:\n-5, 3\nResults:" << endl;
	tmp_real = third_nubmer.getReal();
	tmp_imaginary = third_nubmer.getImaginary();
	cout << tmp_real << ", " << tmp_imaginary << endl;

	cout << "\nComparing first and second number. Expecting:\n0 (false)\nResults:" << endl;
	tmp_compare_result = first_nubmer == second_nubmer;
	cout << tmp_compare_result << endl;

	cout << "\nSetting the second number to 2+2i and printing it. Expecting:\n2+2i\n\nResults:" << endl;
	second_nubmer.setReal(2);
	second_nubmer.setImaginary(2);
	second_nubmer.printNumber();

	cout << "\nComparing first and second number. Expecting:\n1 (true)\nResults:" << endl;
	tmp_compare_result = first_nubmer == second_nubmer;
	cout << tmp_compare_result << endl;

	cout << "\nAdding, subtracting and multiplying the first and third numbers. Expecting\n-3+5i\n7-i\n-16-4i\nResults:" << endl;
	tmp_number = first_nubmer + third_nubmer;
	tmp_number.printNumber();
	tmp_number = first_nubmer - third_nubmer;
	tmp_number.printNumber();
	tmp_number = first_nubmer * third_nubmer;
	tmp_number.printNumber();

	return 0;
} 