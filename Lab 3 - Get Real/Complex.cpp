/* Victor Espinoza
* CECS 282, Section 1
* Spring 2014
* Due Date: 3/11/14
* Lab #3- Get Real
*/

#include "Complex.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include <string>
#include <sstream> // for ostringstream

using namespace std;

Complex::Complex() : mReal(0), mImaginary(0) {

}//close Complex() constructor


Complex::Complex(double real, double imaginary) : mReal(real), 
   mImaginary(imaginary) {

}//close Complex(...) constructor 


double Complex::getReal() const {
   return mReal;
}//close getReal() const


void Complex::setReal(double real) {
   mReal = real;
}//close setReal(...)


double Complex::getImaginary() const {
   return mImaginary;
}//close getImaginary() const


void Complex::setImaginary(double imaginary) {
   mImaginary = imaginary;
}//close setImaginary(...)


double Complex::absoluteValue() const {
   return sqrt((mReal * mReal) + (mImaginary * mImaginary));
}//close  absoluteValue() const


bool Complex::equals(const Complex &other) const {
   return ((mReal == other.mReal) && (mImaginary == other.mImaginary));
}//close equals(...) const


string Complex::toString() const {
   ostringstream format;
   mImaginary >= 0 ? (format << mReal << "+" << mImaginary << "i") : 
    (format << mReal << mImaginary << "i");
   return format.str(); // converts back to string type
}//close toString() const


Complex Complex::conjugate() const{
   Complex temp(mReal, -mImaginary);
   return temp;
}//close conjugate() const


Complex Complex::multiply(const Complex &other) const{
   Complex temp(((mReal * other.mReal) - (mImaginary * other.mImaginary)),
    ((mReal * other.mImaginary) + (other.mReal * mImaginary)));
   return temp;
}//close multiply(...) const