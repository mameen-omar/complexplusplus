#include <string>
#include <iostream>
#include <cmath>
#ifndef COMPLEX_H
#define COMPLEX_H
template <class T>
class complex 
{
    
    public:
        complex();
        complex(T real, T imaginary);
        ~complex();
        T getReal();
        T getImaginary();
        std::string toString();
        void setReal(T real);
        void setImaginary(T imag);
        T getMagnitude();
        complex<T> operator+ (complex<T> const &obj);
        complex<T> operator- (complex<T> const &obj);
        complex<T> operator/ (complex<T> const &obj);
        complex<T> operator* (complex<T> const &obj);
        complex<T> operator% (complex<T> const &obj);
friend std::ostream& operator<< (std::ostream &out, const complex<T>& point);

        friend std::ostream& operator<<(std::ostream& os, const complex<T>& complex);


    private:
        T real;
        T imaginary;
        

    protected:

};


#endif

