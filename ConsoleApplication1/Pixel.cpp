#include <iostream>
#include <string>
#include "Pixel.h"
using namespace std;

void Pixel::SetX(int value)
{
	x_ = value;
}

void Pixel::SetY(int value)
{
	y_ = value;
}

void Pixel::SetColor(string value)
{
	color_ = value;
}

void Pixel::Print() {
	cout << '(' << x_ << ',' << y_ << ',' << color_ << ')';
}

bool Pixel::Read(const char* txt)
{
	if (txt) cout << txt << endl;
	int x, y; string color;

	cout << "X: " && cin >> x;
	cout << "Y: " && cin >> y;
	cout << "Color: " && cin >> color;

	SetX(x);
	SetY(y);
	SetColor(color);
	return true;
}

void Pixel::Move(int delta_x, int delta_y)
{
	this->SetX(this->x_ + delta_x);
	this->SetY(this->y_ + delta_y);
}

double Pixel::Dist(const Pixel& otherPixel)
{
	return sqrt(pow(static_cast<double>(otherPixel.x_ - x_), 2) + pow(static_cast<double>(otherPixel.y_ - y_), 2));
}
