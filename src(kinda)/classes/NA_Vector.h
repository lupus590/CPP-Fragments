//adapted from 1st year maths assignment (lecturer: Gordan Dickers)
#pragma once
#include "NA_GlobalsAndIncludes.h"
class NA_Vector

{
public:

	//construct
	NA_Vector(float x, float y, float z, float w);
	NA_Vector(void);
	void Scale(float s);
	void Add(NA_Vector & v1);
	void normalise(void);
	float dist(NA_Vector & v1);
	void correctW();

	//were private, but gets and sets slowdown realtime systems (such as games)
	float x;
	float y;
	float z;
	float w;
};