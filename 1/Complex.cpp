#include "Complex.h"
using namespace std;

Complex::Complex()
{
	real = 0;
	imaginer = 0;
}
Complex::Complex(int re, int im)
{
	real = re;
	imaginer = im;
}
Complex::Complex(const Complex &comp)
{
	real = comp.real;
	imaginer = comp.imaginer;
}

int Complex::getReal() const
{
	return real;
}
int Complex::getImaginer()
{
	return imaginer;
}
void Complex::setReal(int re)
{
	real = re;
}
void Complex::setImaginer(int im)
{
	imaginer = im;
}

Complex Complex::operator+(Complex const &comp)
{
	Complex c;
	int x = real + comp.real;
	int y = imaginer + comp.imaginer;
	c.setReal(x);
	c.setImaginer(y);
	return c;
}

Complex Complex::operator-(Complex const &comp)
{
	Complex c;
	c.setReal(real - comp.real);
	c.setImaginer(imaginer - comp.imaginer);
	return c;
}

Complex Complex::operator*(Complex const &comp)
{
	Complex c;
	c.setReal(real * comp.real - imaginer * comp.imaginer);
	c.setImaginer(real * comp.imaginer - imaginer * comp.real);
	return c;
}

Complex::~Complex() {}
