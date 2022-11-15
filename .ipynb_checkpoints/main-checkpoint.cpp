#include "declarations.h"

int main(){

    //Trayectoria circular(r=100, w=1/10, T=62.8)
    //-----------( x0 ,y0, z0, Vx0, Vy0, Vz0,m)
    Planeta Sol   (0,   0,  0, 0,    0,           0,  10000);
    Planeta Tierra(50,  0,  0, 0,    10*sqrt(2),  0,  1);
    Planeta Marte (100, 0,  0, 0,    10,          0,  1); 

    //Fuerza inicial
    force(Sol, Tierra);

    //Imprimir Leap_Frog
    Sol.start_leap_frog(DT);
    Tierra.start_leap_frog(DT);
    trans_galileo(Sol, Tierra);
    print(Sol, Tierra, DT);

    for(int ii = 0; ii < NSTEPS; ++ii){
        Sol.leap_frog(DT);
        Tierra.leap_frog(DT);
        force(Sol,Tierra);
        //trans_galileo(Sol, Tierra);
        trans_galileo(Tierra, Sol);
        print(Sol,Tierra, DT);
    }

    //Imprimir Verlet
    // for(int ii = 0; ii < NSTEPS; ii++){
    //     Sol.verlet(DT);
    //     Tierra.verlet(DT);
    //     force(Sol,Tierra);
    //     print(Sol,Tierra, DT);
    // }
}
