#include "complex.h"

template <class T>
complex<T>::complex()
{
    this->setReal(0);
    this->setImaginary(0);
}

template <class T>
complex<T>::complex(T real, T imaginary)
{
    this->setReal(real);
    this->setImaginary(imaginary);
}

template <class T>
complex<T>::~complex()
{
}

template <class T>
T complex<T>::getReal()
{
    return this->real;
}   


template <class T>
T complex<T>::getImaginary()
{
    return this->imaginary;
}

template <class T>
std::string complex<T>::toString()
{
    return(std::to_string(real) + (this->getImaginary() >=0 ? "+j" : "-j") + std::to_string(std::abs(this->getImaginary()))); 
}

template<class T>
void complex<T>::setReal(T real)
{
    this->real = real;
}
template<class T>

void complex<T>::setImaginary(T imag)
{
    this->imaginary = imag;
}
template<class T>
complex<T> complex<T>::operator+ (complex const &obj) 
{ 
    complex<T> result; 
    result.setReal(this->getReal + obj.getReal); 
    result.setImaginary(this->getImaginary + obj.getImaginary()); 
    return result; 
} 

template<class T>
complex<T> complex<T>::operator- (complex const &obj)
{ 
    complex<T> result; 
    result.setReal(this->getReal - obj.getReal); 
    result.setImaginary(this->getImaginary - obj.getImaginary()); 
    return result; 
} 

template<class T>
complex<T> complex<T>::operator/ (complex const &obj)
{ 
    complex<T> result; 
    result.setReal(this->getReal / obj.getReal); 
    result.setImaginary(this->getImaginary / obj.getImaginary()); 
    return result; 
} 

template<class T>
complex<T> complex<T>::operator* (complex const &obj)
{ 
    complex<T> result; 
    result.setReal(this->getReal * obj.getReal); 
    result.setImaginary(this->getImaginary * obj.getImaginary()); 
    return result; 
} 

template<class T>
complex<T> complex<T>::operator% (complex const &obj)
{ 
    complex<T> result; 
    result.setReal(this->getReal % obj.getReal); 
    result.setImaginary(this->getImaginary % obj.getImaginary()); 
    return result; 
} 

template<class T>
std::ostream& operator<< (std::ostream &out, const complex<T> &complex)
{
    std::cout << complex.toString();
    out << complex.toString();
    return out; // return std::ostream so we can chain calls to operator<<
}
