#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Pelicula.h"


int checar(string cf, Funcion funciones[]){
  for(int x=0;x<20;x++){
    if(funciones[x].getFuncion() == cf){
      return x;
    }
  }
  return -1;
  }


int main() {
  Actor actores[20], listaActores[];
  Funcion funciones[20];
  Pelicula peliculas[20];
  ifstream archEntrada;
  ifstream archEntrads2;
  string frase,frase2;
  int nump,sala, opcion, hora, minutos,u=0,id, clave, anio, duracion, numActores, idp,h,m, k=0;
  Hora hora;
  string nombre, nombrePelicula,cf;

//Carga los datos para el arreglo de Actores
ifstream archivoEntrada;
archivoEntrada.open("actores.txt");
 while (archivoEntrada>>id){
    actores[u].setId(id);
    getline(archivoEntrada,nombre);
    actores[u].setNombre(nombre);
    //cout << id << " " << nombre << endl;
    u++;
 }
//Carga los datos para el arreglo de Películas

ifstream archivoEntrada2;
archivoEntrada2.open("Peliculas.txt");
 while(archivoEnt2>>clave>>anio>>duracion>>genero>>numActores){ 
  peliculas[a].setNumPeli(clave);
  peliculas[a].setAnio(anio);
  peliculas[a].setDuracion(duracion);
  peliculas[a].setGenero(genero);
for(int z=0;z<numActores; z++){
  archivoEntrada2>>id;
//agregamos id a lista actores de peliculas
  for(int j=0;j<20, j++){
      if(id==actores[j].getId()){
         peliculas[a].agregar(listaActores[j]); //2 arreglos de objetos diferentes?
         }
      }
    }
  getline(archivoEnt2,titulo){
   peliculas[a].setTitulo(titulo));
  }
  a++;
}


//Pide al usuario que teclee los datos para cada una de las funcionesdisponibles del día.

cout << "Teclee los datos de las fuciones del dia" << endl;
for(int p=0;p>20;p++){
cout << "Numero de la pelicula" << endl;
cin>>nump;
cout << "Sala de la pelicula" << endl;
cin>>sala;
cout << "Nombre de la pelicula" << endl;
cin>>nombre;
cout << "Hora de la pelicula" << endl;
cin>>hora;
cout << "Minutos de la pelicula" << endl;
cin>>minutos;
hora(hora,minutos);
funciones[p].setNumPeli(nump);
funciones[p].setSala(sala);
funciones[p].setSesion(hora);
funciones[p].setFuncion(nombre);
}


//MENU
do{
cout << "MENU " << endl;
cout << "1. Consulta de Actores" << endl;
cout << "2. Consulta de Peliculas" << endl;
cout << "3. Consulta de Funciones" << endl;
cout << "4. Consulta de funciones por hora" << endl;
cout << "5. Consulta por clave de función" << endl;
cout << "6. Consulta de películas en las que participa un actor" << endl;
cout << "7. Terminar"<<endl; 
cout << "Digite una opcion:"<< endl;
cin>> opcion;

switch(opcion){
//Consulta de Actores
  case 1:
  cout << "Los actores que estan en la lista son:"
  for(int a=0;a<20;a++){
    id1=actores[u].getId();
    nombre1=actores[u].getNombre();
    cout << actores[u] << endl;
  }
  break;

//Consulta de Peliculas
  case 2:
  cout << "Las peliculas que estan en la lista son:"
  for(int a=0;a<20;a++){
  clave = peliculas[a].getNumPeli(clave);
  anio = peliculas[a].getAnio(anio);
  duracion =peliculas[a].getDuracion(duracion);
  genero = peliculas[a].getGenero(genero);
  nombre = peliculas[a].getTitulo(nombrePelicula));
  cout << clave << " " << anio << " " << duracion << " " << genero << " " << nombre <<endl; 
  cout << " Los actores que aparecen en esta pelicula son:" << endl;
  for(int s=0; s<peliculas[a].getCantActores();s++){
    cout << peliculas[s].getActor()<< endl; // ?
  }
  }
  break;

//Consula de Funciones
  case 3:
  cout << " Las funciones del dia de hoy son:" << endl;
  for(int a=0;a<20;a++){
  nump = funciones[a].getNumPeli();
  sala = funciones[a].getSala();
  hora = funciones[a].getSesion();
  nombre = funciones[a].getFuncion();
  cout << nump << " "<< nombre << " a las " << hora << "en la sala " << sala << endl;
  }

  break;

//Consula de funciones por hora
  case 4:
  do{
  cout << "Ingrese la hora a la que desea ver la funcion" << endl;
  cin >> h;
  while(h<0 && h>25);
  do{
  cout << "Ingrese los minutos" << endl;
  cin >> m;
  }while(m<0 && m>60);
  hora(h,m); 
  for(int b=0;b>20;b++){
  if(funcion[b].getSesion() == hora){
    nuevonumero=funcion[b].getNumPeli();
    for(int c=0;c>20;c++){
        if(peliculas[c].getNumPeli()==nuevonumero)
        {
          cout << " La pelicula" << peliculas[c].getTitulo() << endl; 
          }
    }
    cout <<  " se encuentra en la sala" << funcion[b].getSala() << endl;
  }    
  }
  
  break; 

//Consula por clave de funcion 
  case 5:
  do{
  cout << "Ingrese la clave de la funcion" << endl;
  cin>>cf;
  //while(v>20)checar todo el arreglo de funciones y no se pare solo a la 1 que encuentra
  p=checar(cf, funciones);
    if(p>=0){
      sala=funciones[p].getSala();
      hora=funciones[p].getSesion();
      nn=funciones[p].getNumPeli();//para poder encontrar la pelicula en mi arreglo
      for(int t=0;t<20;t++){
        if(peliculas[t].getNumPeli==nn){
           titulo=peliculas[t].getTitulo();
           duracion=peliculas[t].getDuracion()
           genero=peliculas[t].getGenero();
           actores=peliculas[t].getlistaActores(); 
        }
      }
      cout 
    }
    else{
      cout << "La clave no existe porfavor intente denuevo." << endl;
    }
    }while(p<0);

  }

  break;

//Consula de peliculas en las que participa un actor
  case 6:
  
  break;

  //Terminar
  case 7:
  cout << "GRACIAS" << endl;
  break;

  default:
  if(opcion <0 || opcion >7){
    cout << "Esta opcion no es valida!"<< endl;
  }

}
}while(opcion!=7);

 

}


  return 0;
}















/*cout << "¿Cual es el numero de pelicula?" << endl;
cin>> num;
cout << "¿Cual es el año de la pelicula?" << endl;
cin>> anio;
cout << "¿Cual es la duracion de la pelicula?" << endl;
cin>> duracion;
cout << "¿Cual es el genero de la pelicula?" << endl;
cin>> genero;
cout << "¿Cual es la cantiad de actores de la pelicula?" << endl;
cin>> cantidad;
cout << "¿Cual es el id de los actores de la pelicula?" << endl;
cin>> id;
//getline(cin,id);

archSalida2 << num << " " << anio << " " << duracion << " " << genero << " " << cantidad << " " << id << endl;*/






