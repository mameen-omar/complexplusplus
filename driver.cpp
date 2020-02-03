#include "complex.h"
#include "complex.cpp"
#include <iostream>
#include <string> 


// TODO:
//       

int main()
{
    std::cout << "Driver for complex number library" << std::endl;
    complex<int>* complexInt1 = new complex<int>(4,3);
    complex<int>* complexInt2 = new complex<int>(2,7);
    std::cout << "Testing constructor:" << std::endl;
    complexInt1->getReal();
    complexInt1->getImaginary();

    complexInt2->getReal();
    complexInt2->getImaginary();




    return 0;
}