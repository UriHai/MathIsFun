#include "ImaginaryNumber.h"

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
    return m_real; 
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

ImaginaryNumber ImaginaryNumber::operator-(const ImaginaryNumber& other) const {
    return ImaginaryNumber(((m_real * other.m_real) - (m_imaginary * other.m_imaginary)), ((m_real * other.m_imaginary) + (m_imaginary * other.m_real)));
}

