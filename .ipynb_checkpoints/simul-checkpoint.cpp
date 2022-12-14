#include "declarations.h"

void force(Planeta & body1, Planeta & body2){

    body1.Aaux = body1.F/body1.mass;
    body2.Aaux = body2.F/body2.mass;

    Vec3D r;
    // direccion de la fuerza m1->m2
    r = body2.R - body1.R;
    //norma
    double r_norm = std::pow((r.x*r.x)+(r.y*r.y)+(r.z*r.z), -1.5);

    double esc = G*body1.mass*body2.mass*r_norm; 
 
    // Fuerza
    body1.F = r*esc;
    body2.F = r*(-esc);
}

void trans_galileo(Planeta & bodyFijo, Planeta & body2, Planeta & body3){
    
    body2.R = body2.R - bodyFijo.R; 
    body2.V = body2.V - bodyFijo.V;
    
    body3.R = body3.R - bodyFijo.R; 
    body3.V = body3.V - bodyFijo.V;
    
    bodyFijo.R = bodyFijo.R - bodyFijo.R;
    bodyFijo.V = bodyFijo.V - bodyFijo.V;
    
}



void print(Planeta & body1, Planeta & body2, double time){
    std::cout << time << ","
        << body1.R.x << ","
        << body2.R.x << ","
        << body1.R.y << ","
        << body2.R.y << "\n";
}
