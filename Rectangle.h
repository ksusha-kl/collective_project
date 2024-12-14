#pragma once
#include <iostream>
#include "Figure_Rec.h"
using namespace std;

class Rectangl : public Figure {
public:
	Rectangl(Point_R O, int R, COLORREF pen, COLORREF brush);
	void draw() override;
};