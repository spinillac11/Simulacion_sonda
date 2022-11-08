#include "declarations.h"

int main(){

    Planeta Tierra, Sol;

    //iniciar sistema
    initial_conditions(Sol, Tierra);
    force(Sol, Tierra);
    start_leap_frog(Sol, DT);
    start_leap_frog(Tierra, DT);
    print(Sol, Tierra, DT);

    for (double ii = 0; ii <= Tmax; ii += DT){
        leap_frog(Sol, DT);
        leap_frog(Tierra, DT);
        force(Sol, Tierra);
        print(Sol, Tierra, DT*ii);
    }
}