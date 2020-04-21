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
  string getTitulo(){return titulo;};
  string getGenero(){return genero;};
  Actor getActor(int x); //solo me regresa uno, no todo mi arreglo 
  int getCantActores(){return cantActores;};
  //metodos necesarios
  bool agregar(Actor i);


  Actor getlistaActores();

private:
int numPeli, anio,duracion,cantActores;
string titulo,genero;
Actor listaActores[10];
//cantActores es como un contador, almacenar la cantidad de actores que hay en arreglo
};


//default
Pelicula::Pelicula(){
  Actor listaActores(0,"nombre");
  cantActores = -1;
  numPeli = 0;
  anio = 0;
  duracion = 0;
  titulo = "nuevo";
  genero = "genero";

}

Actor Pelicula::getActor(int x){
listaActores[x]; //??
}

bool Pelicula::agregar(Actor i){

 if(cantActores<10){
 for(int z=0; z<10; z++){
  if(i.getId() == listaActores[z].getId()){
    return false;
  }
  if(i.getId() != listaActores[z].getId())
  listaActores[cantActores+1] = i;
  cantActores=cantActores+1;
  return true;
 }
 }
 
 else {
   cout <<"Ya no hay espacio disponible" << endl;
   return false;
 }
 ;
}

//Mostar toda lista de actores
Actor Pelicula::getlistaActores(){
for(int s=0;s<x;s++){
//cout << listaActores[s]<< endl;;
cantActores++;
}
}
