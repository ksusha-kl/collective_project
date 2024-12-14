#include "Rhomb.h"

Rhomb::Rhomb(Point_R O, int R, COLORREF pen, COLORREF brush) : Figure(O, R, pen, brush)
{
	top[0] = { O.x + R, O.y };
	top[1] = { O.x, O.y - R };
	top[2] = { O.x - R, O.y };
	top[3] = { O.x, O.y + R };
	if (R <= 0 || O.x <= 0 || O.y <= 0) {
		throw NegativeValueException("������ - ������� ������������ ��������");
	}
}

void Rhomb::draw() {
	for (int i = 0; i < 4; ++i) {
		if (top[i].x < rt.left || top[i].x > rt.right || top[i].y < rt.top || top[i].y > rt.bottom) {
			throw ConsoleBorderException("������ - ������ ������� �� ������� ���� �������");
		}
	}
	Figure::draw();
}