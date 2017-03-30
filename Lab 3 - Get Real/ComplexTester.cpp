/* Victor Espinoza
* CECS 282, Section 1
* Spring 2014
* Due Date: 3/11/14
* Lab #3- Get Real
*/

#include <iostream>
#include "Complex.h"
using namespace std;
#define COMPLEX2_REAL_VALUE 5
#define COMPLEX2_IMAGINARY_VALUE -12
#define COMPLEX1_REAL_VALUE 4
#define COMPLEX1_IMAGINARY_VALUE -12

int main(int argc, char* argv[]) {

   cout << "Welcome to the GetReal program; lets get started!\n"	<< endl;
   Complex complex1;

   //create and output constant complex number using constructor
   const Complex complex2(COMPLEX2_REAL_VALUE, COMPLEX2_IMAGINARY_VALUE);
   cout << "complex2.toString() Output:\n"<< complex2.toString() << endl;

   //create and output complex number using mutator functions
   complex1.setReal(COMPLEX1_REAL_VALUE);
   complex1.setImaginary(COMPLEX1_IMAGINARY_VALUE);
   cout << "\ncomplex1.toString() Output:\n"<< complex1.toString() << endl;

   //complex2 is set to constant, therefore you cannot modify any of
   //the values that you originally assigned to it.
   //complex2.SetReal(8)

   //show output of getReal() function
   cout << "\ncomplex1.getReal() Output:\n" << complex1.getReal() << endl;

   //show output of getImaginary() function
   cout << "\ncomplex1.getImaginary() Output:\n"<< complex1.getImaginary() << endl;

   //shouw output of absoluteValue() function
   cout << "\ncomplex2.absoluteValue() Output:\n" << complex2.absoluteValue() << endl;

   //show output of multiply(...) function
   cout << "\ncomplex1.multiply(complex2) Output: " <<endl;
   cout << complex1.multiply(complex2).toString() << endl;

   cout << "\nThat concludes this program; thank you for using it!\n" <<
      "Enjoy the rest of your day!\n" << endl;
}//close main

/* Output: 
Welcome to the GetReal program; lets get started!

complex2.toString() Output:
5-12i

complex1.toString() Output:
4-12i

complex1.getReal() Output:
4

complex1.getImaginary() Output:
-12

complex2.absoluteValue() Output:
13

complex1.multiply(complex2) Output:
-124-108i

That concludes this program; thank you for using it!
Enjoy the rest of your day!

Press any key to continue . . .
*/