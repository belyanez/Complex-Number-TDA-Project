/**
@Author Eder García Lastiri
@Date 17/Aug/2021
@Name ComplexNumber.h
@Copyright
*/

#ifndef ComplexNumber_h
#define ComplexNumber_h

//Bibliotecas Standard
#include <stdio.h>

//Local libraries

//Data Types
struct _Complex_Number{
  float real;
  float imaginary;
};

typedef struct _Complex_Number* ComplexNumber;

//Interfaces

//Generator/Constructor
ComplexNumber newComplexNumber(float real, float imaginary);



#endif
