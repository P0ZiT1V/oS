#pragma once
#ifdef Vector_EXPORTS
#define Vector_API __declspec(dllexport)
#else
#define Vector_API __declspec(dllimport)
#endif
#include "Number.h"
#include <iostream>
extern "C" class Vector_API Vector {
public:
	Number X;
	Number Y;
	Vector(Number X, Number Y);
	Vector sum(Vector one, Vector two);
	const Vector operator+(const Vector left);
	Number r();
	Number angle();
	void print_vector();
};
const Vector ZERO_Vect(Number(0),Number(0));
const Vector ONE_Vect(Number(1), Number(1));
