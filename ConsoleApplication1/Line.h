#pragma once
#include <iostream>
#include <string>
using namespace std;

class Line {
private:
	int x1_ = 0, x2_ = 0;
	int y1_ = 0, y2_ = 0;
public:
	int GetX1();
	int GetX2();

	int GetY1();
	int GetY2();

	void SetX1(int);
	void SetX2(int);

	void SetY1(int);
	void SetY2(int);

	void Print();
	bool Read(const char* txt);
	void Move(int, int, int, int);
	double Length();
	void Center();
	void CheckPoint(int, int);
};

inline int Line::GetX1() {
	return x1_;
}
inline int Line::GetX2() {
	return x2_;
}
inline int Line::GetY1() {
	return y1_;
}
inline int Line::GetY2() {
	return y2_;
}