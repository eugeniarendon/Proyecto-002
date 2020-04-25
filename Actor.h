// actor.h
#include <iostream>
using namespace std;

class Actor
{
public:
    Actor(); // default
    Actor(int a, string b); // parametros
    //metodos de modificación
	  void setId(int h)	{id=h;};
  	void setNombre(string m) {nombre=m; };
    //metodos de acceso
	  int getId() { return id; };
	  string getNombre() { return nombre; };
     //metodos necesarios
	  void muestra();

private:
	  int id;
    string nombre;
};

Actor::Actor() // constructor default
{
    id = 0;
    nombre = "actor";
}

Actor::Actor(int h, string m) // constructor por parametros
{
    id = h;
    nombre = m;
}

void Actor::muestra(){
  cout << nombre << " " << id << endl;
}