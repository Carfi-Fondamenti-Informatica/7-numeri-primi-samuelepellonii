#include "lib.h"

bool numeriprimi ( int a ){
    bool  vero_o_falso;

    if ( a>2){
        for ( long b=2; b<a ; b++) {
            if ( ( a % b ) == 0) {
                vero_o_falso = false;
                break;
            } else {
                vero_o_falso = true;
            }
        }
    } else if (a==2){
        vero_o_falso = true;
    } else {
        vero_o_falso = false;
    }
    return vero_o_falso;
}
