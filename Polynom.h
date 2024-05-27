#pragma once 
#ifndef POLYNOM_H
#define POLYNOM_H

#include <iostream>
#include <cmath>
#include <Windows.h>
using std::cout;
using std::endl;

class CPolynom3 {
private:
	double a;
	double b;
	double c;
	double x_3 = nan(" ");
public:
	CPolynom3();
	CPolynom3(double value);
	CPolynom3(double value_a, double value_b, double value_c);

	void set_a(double value_a);
	double get_a() const ;

	void set_b(double value_b);
	double get_b() const;

	void set_c(double value_c);
	double get_c() const;

	void set_x_3(double value_x_3);
	double get_x_3();

	double calculation(double x) const;//

	double poxidna(double x)const;//

	void roots() const;//

	void add(double a_1, double b_1, double c_1);//

	void subtraction(double a_1, double b_1, double c_1);//

	void multiplication(double k);

	void negative();
	CPolynom3 operator+ (const CPolynom3& other) const;
	CPolynom3 operator- (const CPolynom3& other) const;
	friend bool operator==(const CPolynom3& object, const CPolynom3& other);

	friend CPolynom3 operator*(CPolynom3& object, double Scalar);
	friend CPolynom3 operator/ (CPolynom3& object, double val);

	friend std::ostream& operator<<(std::ostream& os, CPolynom3& obj);
};
#endif // !1