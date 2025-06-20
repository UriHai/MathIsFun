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
    
    /**
    * @brief						    Imaginary number "=" operator. Compare imaginary numbers
    *
    * @param other			[IN]	    The other imaginary number to compare to
    * @return                           Whether the imaginary numbers are equal (i.e. both their real part and their imaginary part are equal)
    */
    bool operator==(const ImaginaryNumber& other) const;


    /**
    * @brief						    Imaginary number "+" operator. Add imaginary numbers
    *
    * @param other			[IN]	    The other imaginary number to add
    * @return                           The sum of the imaginary numbers (i.e. the sum of their real parts plus the sum of their imaginary parts)
    */
    ImaginaryNumber operator+(const ImaginaryNumber& other) const;
    
    /**
    * @brief						    Imaginary number "-" operator. Subtract imaginary numbers
    *
    * @param other			[IN]	    The imaginary number to subtract
    * @return                           The result of the subtraction of the imaginary numbers
    */
    ImaginaryNumber operator-(const ImaginaryNumber& other) const;

    /**
    * @brief						    Imaginary number "*" operator. Multiply imaginary numbers
    *
    * @param other			[IN]	    The imaginary number to multiply with
    * @return                           The product of the imaginary numbers
    */
    ImaginaryNumber operator*(const ImaginaryNumber& other) const;

    // Print imaginary number
    void printNumber() const;

private:
    double m_real;
    double m_imaginary;
};
// comment