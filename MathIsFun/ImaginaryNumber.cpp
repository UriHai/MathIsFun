#include "ImaginaryNumber.h"

#include <iostream>

using std::cout;
using std::endl;

ImaginaryNumber::ImaginaryNumber() : ImaginaryNumber(0, 0) {
    // Left blank intentionally
}

ImaginaryNumber::ImaginaryNumber(const double real, const double imaginary) : m_real(real), m_imaginary(imaginary) {
    // Left blank intentionally
}

double ImaginaryNumber::getReal() const {
    return m_real; 
}

double ImaginaryNumber::getImaginary() const {
    return m_imaginary; 
}

void ImaginaryNumber::setReal(const double real) {
    m_real = real;
}

void ImaginaryNumber::setImaginary(const double imaginary) {
    m_imaginary = imaginary;
}

bool ImaginaryNumber::operator==(const ImaginaryNumber& other) const {
    return (m_real == other.m_real) && (m_imaginary == other.m_imaginary);
}

ImaginaryNumber ImaginaryNumber::operator+(const ImaginaryNumber& other) const {
    return ImaginaryNumber((m_real + other.m_real), (m_imaginary + other.m_imaginary));
}

ImaginaryNumber ImaginaryNumber::operator-(const ImaginaryNumber& other) const {
    return ImaginaryNumber((m_real - other.m_real), (m_imaginary - other.m_imaginary));
}

ImaginaryNumber ImaginaryNumber::operator*(const ImaginaryNumber& other) const {
    return ImaginaryNumber(((m_real * other.m_real) - (m_imaginary * other.m_imaginary)), ((m_real * other.m_imaginary) + (m_imaginary * other.m_real)));
}

void ImaginaryNumber::printNumber() const {
    if ((m_real != 0) || (m_real == 0 && m_imaginary == 0)) {
        cout << m_real;
    }
    if (m_imaginary > 0) {
        cout << '+';
        if (m_imaginary != 1) {
             cout << m_imaginary;
        }
         cout << 'i';
    } else if (m_imaginary < 0) {
        if (m_imaginary != -1) {
            cout << m_imaginary << 'i';
        } else {
        cout << "-i";
        }
    }
    cout << endl;
} 