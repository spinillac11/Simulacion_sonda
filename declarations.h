#include <iostream>
#include <cmath>
#include "bodies.h"

//Constante G
const double G = 1;
const double T = 1250;//62.80; //Tiempo
const double DT = 0.01; //Intervalo de tiempo
const int NSTEPS = int(T/DT); //Pasos


// function declaratons
void force(Planeta & body1, Planeta & body2);
void trans_galileo(Planeta & bodyFijo, Planeta & body2);
void print(Planeta & body1, Planeta & body2, double time);
