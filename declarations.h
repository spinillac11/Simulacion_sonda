#include <iostream>
#include <cmath>
#include "bodies.h"

//Constante G
const float G = 1;//2.96E-22;//6.67E-11;
const int NSTEPS = 10000; //Pasos
const double DT = 0.01; //Interval de tiempo
const double Tmax = 100; // 1 hora [segundos]

// function declarations
void initial_conditions(Planeta & body1, Planeta & body2);
void force(Planeta & body1, Planeta & body2);
void start_leap_frog(Planeta & body, const double & dt);
void leap_frog(Planeta & body, const double & dt);
void trans_galileo(Planeta & body1, Planeta & body2);
void print(Planeta & body1, Planeta & body2, double time);
