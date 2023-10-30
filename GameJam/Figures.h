#pragma once
using namespace System;
using namespace System::Drawing;
class Figures

{
protected:
	int x, y;
	int  w, h;

public:
	Figures() {
		x = 20;
		w = h = 40;
		
	}
	virtual void mostrar(Graphics^ canvas) {}

	Rectangle getRectangle()
	{
		return Rectangle(x, y, w, h);
	}



};

