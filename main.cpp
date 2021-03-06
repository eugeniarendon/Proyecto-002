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

int checarID(int opcion6,Actor actores[]){
    for(int x=0;x<20;x++){
    if(actores[x].getId() == opcion6){
      return x;
    }
  }
  return -1;
  }

int checarPelicula(int numpeli,Pelicula peliculas[]){
    for(int x=0;x<20;x++){
    if(peliculas[x].getNumPeli() == numpeli){
      return true;
    }
  }
  return false;
  }

int checarSala(int sala, Funcion funciones[],int numeroFunciones){
  for(int x=0;x<numeroFunciones;x++){
    if(funciones[x].getSala() == sala){
      return true;
    }
  }
  return false;
  }


int main() {
  Actor actores[20], listaActores[10];
  Funcion funciones[20];
  Pelicula peliculas[20];
  ifstream archEntrada;
  ifstream archEntrads2;
  string frase,frase2;
  int nump,sala, opcion, hora, minutos,u=0,id, clave, anio,duracion, numActores, idp,h,m, k=0, opcion6, a=0, id1,nuevonumero,nn,p, numeroFunciones,cont=0;
  Hora horaobj;
  string nombre, nombrePelicula,cf,genero,titulo, nombre1, elnombre,clavefuncion;
  Actor actorespelicula;

//Carga los datos para el arreglo de Actores
ifstream archivoEntrada;
archivoEntrada.open("actores.txt");
 while (archivoEntrada >> id){
    actores[u].setId(id);
    getline(archivoEntrada,nombre);
    actores[u].setNombre(nombre);
    u++;
    }
    archivoEntrada.close();


//Carga los datos para el arreglo de Películas
ifstream archivoEntrada2;
archivoEntrada2.open("Peliculas.txt");
 while(archivoEntrada2>>clave>>anio>>duracion>>genero>>numActores)
 { 
  peliculas[a].setNumPeli(clave);
  peliculas[a].setAnio(anio);
  peliculas[a].setDuracion(duracion);
  peliculas[a].setGenero(genero);
  //cout << peliculas[a].getNumPeli() << " " << peliculas[a].getAnio();
  for(int z=0; z<numActores;z++)
  { archivoEntrada2>>id; 
      //agregar id a lista actores de peliculas
      for(int j=0; j<u ; j++){
           if(id==actores[j].getId()){
            peliculas[a].agregar(actores[j]);
           }
        }
    }
  getline(archivoEntrada2,titulo);
  peliculas[a].setTitulo(titulo);
  a++;
  //peliculas[a].listaActoresCompleta();
}
archivoEntrada2.close();

cout << "¡¡ Bienvenido al Cine!!" << endl;

//Pide al usuario que teclee los datos para cada una de las funcionesdisponibles del día.
cout << "¿Cuantas funciones desea agregar?" << endl;
cin>>numeroFunciones;

cout << "Teclee los datos de las fuciones del dia" << endl;
do{
  do{
    cout << "Numero de la pelicula" << endl;
    cin>>nump;
      if(checarPelicula(nump,peliculas)==true)
      {
        funciones[p].setNumPeli(nump);
       }
      if(checarPelicula(nump,peliculas)==false)
      {
         cout << "No existe ese numero de pelicula, intente otro" << endl;
       }
}while(checarPelicula(nump,peliculas)==false);

do{
cout << "Sala de la pelicula" << endl;
cin>>sala;
checarSala(sala, funciones, numeroFunciones);
      if(checarSala(sala, funciones, numeroFunciones)==true)
      {
         cout << "Esta sala ya esta siendo utilizada durante el dia, elija otra!" << endl;
       }
}while(checarSala(sala, funciones, numeroFunciones)==true);


do{
  cout << "Hora de la pelicula" << endl;
  cin>>hora;
}while(0<hora && hora>24);

do{
  cout << "Minutos de la pelicula" << endl;
  cin>>minutos;
}while(0<minutos && minutos>60);

cout<<"Escribe la clave de la Funcion" << endl;
cin >> clavefuncion;

Hora horaPelicula(hora,minutos);
funciones[p].setNumPeli(nump);
funciones[p].setSala(sala);
funciones[p].setSesion(horaPelicula);
funciones[p].setFuncion(clavefuncion);
p++;
}while(p<numeroFunciones);


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
  case 1:{
  cout << "Los actores que estan en la lista son:" << endl;
  cout << "  NOMBRE "<< "  ID "  << endl;
  for(int a=0;a<20;a++){
  actores[a].muestra();
  }
  }
  break;

//Consulta de Peliculas
  case 2:{
   cout << "Las peliculas que estan en la lista son:" << endl;
  for(int a=0;a<20;a++){
    clave = peliculas[a].getNumPeli();
    anio = peliculas[a].getAnio();
    duracion =peliculas[a].getDuracion();
    genero = peliculas[a].getGenero();
    nombre = peliculas[a].getTitulo();
    cout << clave << " " << anio << " " << duracion << " " << genero << " " << endl;
    cout << nombre <<endl; 
    cout << " Los actores son:" << endl;
      for(int s=0; s<peliculas[a].getCantActores();s++){
      peliculas[a].infoActor(s);
      }
      }
  
}
  break;

//Consula de Funciones
  case 3:{
  cout << "Las funciones del dia de hoy son:" << endl;
  for(int a=0;a<numeroFunciones;a++){
  funciones[a].mostrar();
  }
  }
  break;

//Consula de funciones por hora
  case 4:{
  do{
  cout << "Ingrese la hora a la que desea ver la funcion" << endl;
  cin >> h;
  }while(h<0 && h>25);
  do{
  cout << "Ingrese los minutos" << endl;
  cin >> m;
  }while(m<0 && m>60);
  Hora horacase4(h,m);

  for(int b=0 ; b<20 ; b++){
        if(funciones[b].getSesion().getHora() == horacase4.getHora()){
          if(funciones[b].getSesion().getMin() == horacase4.getMin()){
          for(int c=0;c<20;c++){
            if(peliculas[c].getNumPeli()==funciones[b].getNumPeli())
               {
                cout << " La pelicula" << peliculas[c].getTitulo(); 
                }
            }  
          }
     cout <<  " se encuentra en la sala " << funciones[b].getSala() << endl;
     }  
   }
  }
  break; 

//Consula por clave de funcion 
  case 5:{
do{
  cout << "Ingrese la clave de la funcion" << endl;
  cin>>cf;
  do{
    p=checar(cf, funciones);
      if(p>=0){
        cout <<"La sala es:"<< funciones[p].getSala() << endl;
        cout << "La hora es: "; 
        funciones[p].getSesion().muestra();
          for(int t=0;t<20;t++){
            if(peliculas[t].getNumPeli()==funciones[p].getNumPeli()){
              cout << "El titulo es:" << peliculas[t].getTitulo()<<endl;
              cout << "La duracion es de " << peliculas[t].getDuracion()<< " minutos " << endl;;
              cout << "El genero es: " << peliculas[t].getGenero()<<endl;;
            }
          }
          cout << "Los actores que participan en esta pelicula son:" << endl;
          for(int s=0; s<peliculas[p].getCantActores();s++){
          peliculas[p].infoActor(s);
          }
         }
    cont++;
  }while(cont==numeroFunciones);
    
    if(p==-1)
    {
      cout << "La clave no existe porfavor intente denuevo." << endl;
    }
    }while(p<0);
  }
  break;

//Consula de peliculas en las que participa un actor
  case 6:
  {
    do{
    cout <<"Inserte el ID del actor del cual desea tener mas información" << endl;
    cin>>opcion6;
    p=checarID(opcion6,actores);
      if(p>=0){
      cout << "El actor aparece en las siguientes peliculas:" << endl;
        for(int l=0;l<20;l++){
          for(int i=0;i<10;i++){
           if(peliculas[l].listaActores[i].getId() ==opcion6){
             cout <<  peliculas[l].getTitulo() <<  " " << peliculas[l].getAnio() << endl;
             }
           }
        }
      }
      else{
        cout << "La clave no existe porfavor intente denuevo." << endl;
      }
    }while(p<0);
  }
  break;

  //Terminar
  case 7:{
  cout << "GRACIAS" << endl;
  }
  break;

  default:{
  if(opcion <0 || opcion >7){
    cout << "Esta opcion no es valida!"<< endl;
  }
  }
}
}while(opcion!=7);

return 0;
}























