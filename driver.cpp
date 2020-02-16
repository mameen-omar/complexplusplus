#include "complex.h"
#include "complex.cpp"
#include <iostream>
#include <string> 
#include <assert.h>

int main()
{
    std::cout << "Driver for complex number library" << std::endl;
    complex<int>* complexInt1 = new complex<int>(4,3);
    complex<int>* complexInt2 = new complex<int>(2,7);
    std::cout << "Testing constructor:" << std::endl;
    assert(complexInt1->getReal() == 4);
    assert(complexInt1->getImaginary()==3);
    assert(complexInt2->getReal() == 2);
    assert(complexInt2->getImaginary() == 7);
    std::cout << "Constructor tests pass" << std::endl;
    
    return 0;
}