#include <iostream>
#include "Actor.h"
#include "Funcion.h"
#include "Pelicula.h"
#include <fstream>

using namespace std;


int main() {
  Actor actores[20];
  Funcion funciones[20];
  Pelicula peliculas[20];
  ofstream archSalida;
  ofstream archSalida1;
  ofstream archSalida2;
  string k;

archSalida.open("actores.txt");
cout << "Escriba el id y el actor" << endl;
for (int k = 0; k < 20; k++){
	archivoSalida << getline(cin,k) << endl;
}

archSalida.open("actores.txt");
for (int k = 0; k < 20; k++){
	archivoSalida << getline(cin,k) << endl;
}

	archivoSalida.close();
}


}