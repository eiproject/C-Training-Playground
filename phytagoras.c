#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * Define Phytagoras class
 */
typedef struct Phytagoras Phytagoras;
struct Phytagoras {
    /**
     * Variables header...
     */
    double x, y;

    /**
     * Functions header...
     */
    double (*result)(Phytagoras *shape);
};

/**
 * Functions
 */
double calc(Phytagoras *object) {
        return object->x * object->y;
}

/**
 * Constructor
 */
Phytagoras _Phytagoras() {
    Phytagoras s;

    s.x = 1;
    s.y = 1;

    s.result = calc;

    return s;
}

void main(){
    // gcc -shared -o phytagoras.dll phytagoras.c
}
