#include "SemiCircle.h"
#include <cmath>
#include "windows.h"
using namespace std;
SemiCircle::SemiCircle(int X, int Y, double r, COLORREF brush, COLORREF pen, double angle) : x(X), y(Y), radius(r), brush(brush), pen(pen), angle(angle) {
    hwnd = GetConsoleWindow();
    GetClientRect(hwnd, &rt);
}

void SemiCircle::show() {
    const double PI = 3.14159265358979323846;
    HDC hdc = GetDC(GetConsoleWindow());
    HPEN hPen = CreatePen(PS_SOLID, 2, pen);
    HBRUSH hBrush = CreateSolidBrush(brush);
    SelectObject(hdc, hPen);
    SelectObject(hdc, hBrush);

    int x1 = x - radius;
    int y1 = y - radius;
    int x2 = x + radius;
    int y2 = y + radius;

    double angle1 = angle - (PI / 2);
    double angle2 = angle + (PI / 2);

    int xEdge1 = static_cast<int>(x + radius * cos(angle1));
    int yEdge1 = static_cast<int>(y + radius * sin(angle1));
    int xEdge2 = static_cast<int>(x + radius * cos(angle2));
    int yEdge2 = static_cast<int>(y + radius * sin(angle2));

    Pie(hdc, x1, y1, x2, y2, xEdge1, yEdge1, xEdge2, yEdge2);

    DeleteObject(hPen);
    DeleteObject(hBrush);
    ReleaseDC(GetConsoleWindow(), hdc);
}