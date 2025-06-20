#pragma once

class ImaginaryNumber {
public:
    //Imaginary number default constructor. Sets the real and imaginary parts to 0
    ImaginaryNumber();

    /**
    * @brief						    Imaginary number constructor
    *
    * @param real			    [IN]	The real part of the number
    * @param imaginary		    [IN]	The imaginary part of the number
    */
    ImaginaryNumber(const double real, const double imaginary);

    // Get the real part of the number
    double getReal() const;

    // Get the imaginary part of the number
    double getImaginary() const;

    /**
     * @brief						    Set the real part of the 
     *
     * @param real			    [IN]	The real part of the number
     */
    void setReal(const double real);

    
    /**
     * @brief						    Set the imaginary part of the
     *
     * @param imaginary			[IN]	The imaginary part of the number
     */    
    void setImaginary(const double imaginary);
    
    bool operator==(const ImaginaryNumber& other) const;
    ImaginaryNumber operator+(const ImaginaryNumber& other) const;
    ImaginaryNumber operator-(const ImaginaryNumber& other) const;
    ImaginaryNumber operator*(const ImaginaryNumber& other) const;

    void printNumber() const;

private:
    double m_real;
    double m_imaginary;
};