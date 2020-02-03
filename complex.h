#include <string>
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
        complex<T> operator+ (complex const &obj);
        complex<T> operator- (complex const &obj);
        complex<T> operator/ (complex const &obj);
        complex<T> operator* (complex const &obj);
        complex<T> operator% (complex const &obj);




    private:
        T real;
        T imaginary;
        

    protected:

};
#endif

