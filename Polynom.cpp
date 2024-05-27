#include "Polynom.h"

CPolynom3::CPolynom3()
{
	a = 0;
	b = 0;
	c = 0;
}

CPolynom3::CPolynom3(double value)
{
	a = b = c = value;
}

CPolynom3::CPolynom3(double value_a, double value_b, double value_c)
{
	a = value_a;
	b = value_b;
	c = value_c;
}

void CPolynom3::set_a(double value_a) { a = value_a; }
double CPolynom3::get_a() { return a; }

void CPolynom3::set_b(double value_b) { b = value_b; }

double CPolynom3::get_b() { return b; }

void CPolynom3::set_c(double value_c) { c = value_c; }

double CPolynom3::get_c() { return c; }

void CPolynom3::set_x_3(double value_x_3) { x_3 = value_x_3; }

double CPolynom3::get_x_3() { return x_3; }

double CPolynom3::calculation(double x) const
{
	double y = x * x * a + x * b + c;
	return y;
}

double CPolynom3::poxidna(double x) const
{
	double y_ = x * 2 * a + b;
	return y_;
}

void CPolynom3::roots() const
{
	double des = b * b - 4 * a * c;
	if (des > 0) {
		double x_1 = (-b + pow(des, 1 / 2)) / (2 * a);
		double x_2 = (-b - pow(des, 1 / 2)) / (2 * a);
		cout << "x_1=" << x_1 << endl;
		cout << "x_2=" << x_2 << endl;
	}
	else if (des == 0) {
		double x = -b / (2 * a);
		cout << "x=" << x << endl;
	}
	else
		cout << "eror" << endl;
}

void CPolynom3::add(double a_1, double b_1, double c_1)
{
	a = a + a_1;
	b = b + b_1;
	c = c + c_1;
}

void CPolynom3::subtraction(double a_1, double b_1, double c_1)
{
	a = a - a_1;
	b = b - b_1;
	c = c - c_1;
}

void CPolynom3::multiplication(double k)
{
	a = a * k;
	b = b * k;
	c = c * k;
}

void CPolynom3::negative()
{
	a = a * -1;
	b = b * -1;
	c = c * -1;
}

CPolynom3 CPolynom3::operator+ (const CPolynom3& other) const
{
	return CPolynom3(a + other.a, b + other.b, c + other.c);
}

CPolynom3 CPolynom3::operator-(const CPolynom3& other) const
{
	return CPolynom3(a - other.a, b - other.b, c - other.c);
}


CPolynom3 operator*(CPolynom3& object, double Scalar)
{
	return CPolynom3(object.a * Scalar, object.b * Scalar, object.c * Scalar);
}

CPolynom3 operator/(CPolynom3& object, double val)
{
	return CPolynom3(object.a / val, object.b / val, object.c / val);
}

std::ostream& operator<<(std::ostream& os, CPolynom3& obj)
{
	os << "(" << obj.a << ", " << obj.b << ", " << obj.c << ")";
	return os;
}
