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
  Actor setlistaActores(Actor i);
  void setNumPeli(int d){ numPeli = d;};
  void setAnio(int i){anio=i;};
  void setDuracion(int d){ duracion = d;};
  void setTitulo(string a){titulo = a;};
  void setGenero(string b){genero= b;};
  //metodos de acceso(get)
  Actor getlistaActores(); 
  void getNumPeli(){ return numPeli;};
  void getAnio(){return anio;};
  void getDuracion(){ return duracion;};
  void getCantActores(){return cantActores;};
  void getTitulo(){return titulo;};
  void getGenero(){return genero;};
  int listaActoresMetodo(int x){cout << listaActores[x]<<endl;};
  //metodos necesarios
  Actor agregar(Actor i);

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
  numpeli = 0;
  anio = 0;
  duracion = 0;
  titulo = "nuevo";
  genero = "genero"

}


Actor Pelicula::getlistaActores(Actor i){
return listaActores;
}

string Pelicula::listaActores(int x){
cout << listaActores[x] << endl;
cantActores++;
}

bool Pelicula::agregar(Actor i){

 if(cantActores<10){
 for(int z=0; z<10; z++){
  if(i.getId() == listaActores[z].getId()){
    return false;
  }
  if(i.getId() =! listaActores[z].getId())
  listaActores[cantActores+1] = i;
  cantActores=cantActores+1;
  return true;
 }
 
 else if(cantActores>10){
   cout <<"Ya no hay espacio disponible" << endl;
   return false;
 }
 
;
}