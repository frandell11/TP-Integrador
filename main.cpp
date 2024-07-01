#include <iostream>
#include <cTime>
#include "funciones.h"
#include "juego.h"

using namespace std;

int main(){

srand(time(0));

//variables de tirada//
int dado[6]; int time; int PuntajeJuego = 0; int conrondas = 0; int PuntajeRonda = 0;

//variables de usuarios//
string jugadorA;

//solicitud del nombre del usuario//

cout << "ingrese el nombre del jugador: ";
cin >> jugadorA;

cout <<"bienvenido "<< jugadorA << "." << endl;

system("pause");
system("cls");

juego();
//puntaje de la ronda//




//suma a puntaje de juego//
PuntajeJuego += PuntajeRonda;
cout << "puntaje total de juego:" << PuntajeJuego << "." << endl;

return 0;
}


