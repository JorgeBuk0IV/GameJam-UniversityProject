#pragma once
#include"Casita1.h"
#include"Casita2.h"
#include"Casita3.h"
enum Direccion{ UNO, DOS, TRES,NONE};

class MostrarCasitas{
private:
	Casita1* c1;
	Casita2* c2;
	Casita3* c3;

public:
	MostrarCasitas() 
	{
		c1 = new Casita1();
		c2 = new Casita2();
		c3 = new Casita3();
	}
	~MostrarCasitas() 
	{
		delete c1;
		delete c2;
		delete c3;
	}
    void show(Graphics^ canvas, Direccion dir)
    {
        switch (dir)
        {
        case UNO:
            canvas->Clear(Color::White);
            c1->mostrar(canvas);
            break;
        case DOS:
            canvas->Clear(Color::White);
            c2->mostrar(canvas);
            break;
        case TRES:
            canvas->Clear(Color::White);
            c3->mostrar(canvas);
            break;
        case NONE:
            break;
        }

        /*   if (_kbhit())
        {
            char tecla;
            tecla = toupper(_getch());
            if (tecla == 'A')
            {
                Console::WriteLine("Tecla 'A' presionada");
                canvas->Clear(Color::White);
                c1->mostrar(canvas);
            }
            if (tecla == 'B')
            {
                Console::WriteLine("Tecla 'B' presionada");
                canvas->Clear(Color::White);
                c2->mostrar(canvas);
            }
            if (tecla == 'C')
            {
                Console::WriteLine("Tecla 'C' presionada");
                canvas->Clear(Color::White);
                c3->mostrar(canvas);
            }
        }
    }*/
    }
};

