//funcion.h
#include <iostream>
#include  "Hora.h"
using namespace std;

class Funcion
{
public:

  Funcion(); // default
  Funcion(Hora, int, int, string); //no es necesario poner un nombre a la variable pq cuando lo implemento 
  //metodos de modificación(void)
  Hora setSesion(Hora i){sesion=i;};
  void setNumPeli(int d){ numpeli = d;};
  void setSala(int d){ sala = d;};
  void setFuncion(string a){cveFuncion = a;};
  //metodos de acceso(get)
  Hora getSesion(){return sesion;};
  int getNumPeli(){ return numpeli; };
  int getSala(){ return sala;};
  string getFuncion(){return cveFuncion;};
  //metodos mostrar
  void mostrar();

private:
  Hora sesion;
	int numpeli,sala;
  string cveFuncion;

};

//default
Funcion::Funcion(){
  Hora x(00,00);
  sesion = x;
  numpeli = 0;
  sala = 0;
  cveFuncion = "Funcion";
  //cont++;
}

Funcion::Funcion(Hora i, int a , int b , string c){
  sesion = i;
  numpeli = a;
  sala = b;
  cveFuncion = c;
  //cont++;
}

void Funcion::mostrar(){
  cout << "Cve Funcion: " << cveFuncion << endl;
  //cout << "Sesion: " << sesion << endl;
  cout << "Sala: " << cveFuncion << endl;
  cout << "Numero Pelicula: " << numpeli << endl;

}
