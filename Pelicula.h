//pelicula.h
#include <iostream>
#include  "Actor.h"
#include "Funcion.h"

using namespace std;

class Pelicula
{
  public:

  Pelicula(); // default

  //metodos de modificación(void)
  void setNumPeli(int d){ numPeli = d;};
  void setAnio(int i){anio=i;};
  void setDuracion(int d){ duracion = d;};
  void setTitulo(string a){titulo = a;};
  void setGenero(string b){genero= b;};

  //metodos de acceso(get) 
  int getNumPeli(){ return numPeli;};
  int getAnio(){return anio;};
  int getDuracion(){ return duracion;};
  int getCantActores(){return cantActores;};
  string getTitulo(){return titulo;};
  string getGenero(){return genero;};
  Actor getactor(int x);

  //metodos necesarios
  void agregar(Actor i);
  Actor listaActoresCompleta();
  Actor infoActor(int x); 
  int idActor(int x);
  Actor listaActores[10];

private:
int numPeli, anio,duracion,cantActores;
string titulo,genero;
//Actor listaActores[10];
};


//default
Pelicula::Pelicula(){
  Actor listaActores(0,"nombre");
  cantActores = 0;
  numPeli = 0;
  anio = 0;
  duracion = 0;
  titulo = "nuevo";
  genero = "genero";

}

Actor Pelicula::getactor(int x){
  return listaActores[x];
}

Actor Pelicula::infoActor(int x){
listaActores[x].muestra();
}

void Pelicula::agregar(Actor i){
int contador=1;//para validar que si ya existe el id, no entre a otro if
if(cantActores==10){
  cout << " No hay espacio disponible para agregar a un actor" << endl;
}

if(cantActores==0){
  listaActores[0].setId(i.getId());
	listaActores[0].setNombre(i.getNombre());
	cantActores = cantActores + 1;
}

if(cantActores!=0){
  for(int z=0; z<10; z++){
    if(i.getId() == listaActores[z].getId() && contador==1){
      //cout <<"El actor ya existe"<< endl;
      contador=0;
    }
  //Validar que sea diferente, que no haya ya entrado a mi ciclo for anterior y que ya este presente, y que el id se encuentre en 0 (valor definido como default)
    if(i.getId() != listaActores[z].getId() && contador==1 && listaActores[z].getId() == 0){
    listaActores[z].setId(i.getId());
    listaActores[z].setNombre(i.getNombre());
    contador = 0;
    cantActores=cantActores+1;
    }
   }
  }
}

//Mostar toda lista de actores
Actor Pelicula::listaActoresCompleta(){
  for(int y=0;y<cantActores;y++){
    listaActores[y].muestra();
  }
}

int Pelicula::idActor(int x){
  listaActores[x].getId();
}

