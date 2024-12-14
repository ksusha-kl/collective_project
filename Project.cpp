#include "Rhomb.h"
#include "Rectangle.h"
#include "Rectangle1.h"
#include "Figure_Rec.h"
#include "Circle.h"
#include "Point.h"
#include "Figure_C.h"
#include "Square.h"
#include "Point_Square.h"
#include "SemiCircle.h"
#include <iostream>
using namespace std;

int main() {
	const int NotUsed = system("color F0");
	SetConsoleTitle((LPCWSTR)L"23VP1");
	COORD p = { 0, 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

	const double PI = 3.14159265358979323846;

	Rectangl* b1 = new Rectangl({ 495, 287 }, 90, RGB(0, 0, 0), RGB(144, 238, 144));
	Rectangl* b2 = new Rectangl({ 575, 160 }, 200, RGB(0, 0, 0), RGB(144, 238, 144));
	Rectangl* b3 = new Rectangl({ 405, 160 }, 223, RGB(0, 0, 0), RGB(144, 238, 144));
	b1->draw();
	b2->draw();
	b3->draw();

	SemiCircle semi1(380, 210, 40, RGB(144, 238, 144), RGB(0, 0, 0), PI / 4);
	SemiCircle semi6(590, 200, -40, RGB(144, 238, 144), RGB(0, 0, 0), -PI / 6);
	semi1.show();
	semi6.show();

	Rectangl1* b4 = new Rectangl1({ 360, 360 }, 260, RGB(0, 0, 0), RGB(127, 118, 121));
	b4->draw();
	Point_Square* sq1 = new Square(390, 380, 100, RGB(0, 0, 0), RGB(153, 144, 147));
	Point_Square* sq2 = new Square(490, 380, 100, RGB(0, 0, 0), RGB(153, 144, 147));
	sq1->Draw();
	sq2->Draw();

	for (int i = 0; i < 5; ++i) {
		double angle = i * (2 * 3.14159265358979323846 / 5);
		int x = 400 + 50 * cos(angle);
		int y = 110 + 50 * sin(angle);
		Circle petal{ {x, y}, 50, RGB(255, 153, 189) };
		petal.print();
	}
	for (int i = 0; i < 5; ++i) {
		double angle = i * (2 * 3.14159265358979323846 / 5);
		int x = 600 + 50 * cos(angle);
		int y = 110 + 50 * sin(angle);
		Circle petal{ {x, y}, 50, RGB(255, 215, 0) };
		petal.print();
	}
	for (int i = 0; i < 5; ++i) {
		double angle = i * (2 * 3.14159265358979323846 / 5);
		int x = 500 + 50 * cos(angle);
		int y = 210 + 50 * sin(angle);
		Circle petal{ {x, y}, 50, RGB(206, 063, 217) };
		petal.print();
	}

	Rhomb* rh1 = new Rhomb({ 400, 110 }, 30, RGB(0, 0, 0), RGB(206, 063, 217));
	Rhomb* rh2 = new Rhomb({ 600, 110 }, 30, RGB(0, 0, 0), RGB(255, 153, 189));
	Rhomb* rh3 = new Rhomb({ 500, 210 }, 30, RGB(0, 0, 0), RGB(255, 215, 0));
	rh1->draw();
	rh2->draw();
	rh3->draw();

	Circle circle1{ {490, 195}, 23, RGB(255, 25, 25) };
	SemiCircle sem1(480, 200, 20, RGB(168, 217, 255), RGB(0, 0, 0), PI / 4);
	SemiCircle sem2(500, 200, -20, RGB(168, 217, 255), RGB(0, 0, 0), -PI / 4);
	sem1.show();
	sem2.show();
	circle1.print();

	Circle circle2{ {640, 60}, 23, RGB(255, 0, 51) };
	SemiCircle sem3(660, 70, 25, RGB(168, 217, 255), RGB(0, 0, 0), PI / 6);
	SemiCircle sem4(620, 50, -25, RGB(168, 217, 255), RGB(0, 0, 0), PI / 6);
	sem3.show();
	sem4.show();
	circle2.print();

	SemiCircle semi2(470, 280, 35, RGB(144, 238, 144), RGB(0, 0, 0), -PI / 4);
	SemiCircle semi3(670, 300, -30, RGB(144, 238, 144), RGB(0, 0, 0), -PI / 4);
	SemiCircle semi4(670, 400, -35, RGB(144, 238, 144), RGB(0, 0, 0), PI / 3);
	SemiCircle semi5(770, 450, -40, RGB(144, 238, 144), RGB(0, 0, 0), -PI / 6);
	SemiCircle semi7(392, 320, 33, RGB(144, 238, 144), RGB(0, 0, 0), -PI / 6);
	semi2.show();
	semi3.show();
	semi4.show();
	semi5.show();
	semi7.show();

	Sleep(12000);
}
