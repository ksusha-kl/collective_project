#pragma once
#include <iostream>
#include "Figure_Rec.h"
using namespace std;

class Rhomb : public Figure {
public:
	Rhomb(Point_R O, int R, COLORREF pen, COLORREF brush);
	void draw() override;
};