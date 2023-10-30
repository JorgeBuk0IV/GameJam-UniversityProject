#pragma once
#include "Casita.h"
 class Casita3 : public Casita
{
public:
	Casita3() {
		
	}
	void mostrar(Graphics^ canvas) {
        // Llamar a la implementación de la clase base para no tener que escribir mas codigo
        Casita::mostrar(canvas);

        // Adding the celling
        array<Point>^ rayita1 = gcnew array<Point>
        {
            Point(x + (w / 2) + 9, y - h + 10),
                Point(x + w + 55, y - h + 10)
        };
        array<Point>^ rayita2 = gcnew array<Point>
        {
            Point(x + (w / 2) + 21, y - h + 25),
                Point(x + w + 69, y - h + 25)
        };
        array<Point>^ rayita3 = gcnew array<Point>
        {
            Point(x + (w / 2) + 33, y - h + 40),
                Point(x + w + 83, y - h + 40)
        };
        array<Point>^ rayita4 = gcnew array<Point>
        {
            Point(x + (w / 2) + 41, y - h + 50),
                Point(x + w + 92, y - h + 50)
        };
        canvas->DrawPolygon(Pens::Black, rayita1);
        canvas->DrawPolygon(Pens::Black, rayita2);
        canvas->DrawPolygon(Pens::Black, rayita3);
        canvas->DrawPolygon(Pens::Black, rayita4);
    }
	
};

