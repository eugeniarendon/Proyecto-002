// hora.h
#include <iostream>

class Hora
{
public:
    Hora(); // default
    Hora(int a, int b); // parametros
    //metodos de modificación
	  void setHora(int h)	{h = ((h>=0 && h<25)?h:0);};
  	void setMin(int m) {minu = ((m>=0 && m<60)?m:0); };
    //metodos de acceso
	  int getHora() { return h; };
	  int getMin() { return minu; };
     //metodos necesarios
	  void muestra();
private:
	  int h, minu;
};

Hora::Hora() // constructor default
{
    h = 0;
    minu = 0;
}

Hora::Hora(int y, int m) // constructor por parametros
{
    h = y;
    minu = m;
}

void Hora::muestra()
{
	//cout << getw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << minu << endl;
}