#include "Rectangle.h"

Rectangl::Rectangl(Point_R O, int R, COLORREF pen, COLORREF brush) : Figure(O, R, pen, brush)
{
	top[0] = { O.x, O.y };
	top[1] = { O.x + 8, O.y };
	top[2] = { O.x + 8, O.y + R };
	top[3] = { O.x , O.y + R };
	if (R <= 0 || O.x <= 0 || O.y <= 0) {
		throw NegativeValueException("Ошибка - введено некорректное значение");
	}
}

void Rectangl::draw() {
	for (int i = 0; i < 4; ++i) {
		if (top[i].x < rt.left || top[i].x > rt.right || top[i].y < rt.top || top[i].y > rt.bottom) {
			throw ConsoleBorderException("Ошибка - фигура выходит за границы окна консоли");
		}
	}
	Figure::draw();
}