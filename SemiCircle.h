#pragma once
#include <windowsx.h>
#include <windows.h>
class SemiCircle {
public:
    SemiCircle(int x, int y, double r, COLORREF brush, COLORREF pen, double angle);
    void show();
private:
    int x, y;
    double radius;
    double angle;
    COLORREF brush;
    COLORREF pen;
    HWND hwnd;
    RECT rt;
};

