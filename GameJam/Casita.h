#pragma once
#include "Figures.h"
#include <conio.h>
#include <iostream>


class Casita: public Figures
{
	private:
		int formWidth = 949;
		int formHeight = 656;
	
public:
	Casita() {
		h = 60; // Alto de las paredes
		w = 100; // Ancho de las paredes
		 x = ((formWidth - w) / 2) -85;
		 y = (formHeight - h) / 2;
	}
	virtual void mostrar(Graphics^ canvas) {
		

		//Drawing walls
		Rectangle rect1(x, y, w, h);
		Rectangle rect2(x + w, y, w, h);

		canvas->DrawRectangle(Pens::Black, rect1);
		canvas->FillRectangle(Brushes::SteelBlue, x+1, y, w, h);

		canvas->DrawRectangle(Pens::Black, rect2);

		canvas->FillRectangle(Brushes::SteelBlue, x + w+1, y, w-1, h);


		//drawing ceiling
		array<Point>^ puntos = gcnew array<Point>
		{
			Point(x + (w / 2), y-h),
			Point(x + w, y),
			Point(x + (w * 2), y),
			Point(x + w + 45, y-h),

		};
		canvas->DrawPolygon(Pens::Black, puntos);


		//Drawing triangle
		array<Point>^ trin = gcnew array<Point>
		{
			Point(x + (w / 2), y-h),
				Point(x - 0.3f, y),
				Point(x + w-0.3f, y)
		};
		canvas->FillPolygon(Brushes::Red, trin);
		canvas->DrawPolygon(Pens::Black, trin);
		

		//Drawing door
		Rectangle door(x + ((w/2 )- 17), y+15, w-75, h-15);
		canvas->DrawRectangle(Pens::Black, door);
		canvas->FillRectangle(Brushes::Yellow, x + ((w / 2) - 16), y + 16, w - 76, h - 16);


		//Drawing window
		Rectangle wind(x + w + 25, y + (h/2) -10, w-57, h - 45);

		canvas->DrawRectangle(Pens::Black, wind);
		canvas->FillRectangle(Brushes::White, x + w + 26, y + (h / 2) - 8, w - 58, h - 47);


	}

		
};

