#include <stdio.h>
#include <math.h>
#include <string.h>
#include <uchar.h>

/**
 * Define Pythagoras class
 */
typedef struct Pythagoras Pythagoras;
struct Pythagoras {
    /**
     * Variables header...
     */
    double x, y;

    /**
     * Functions header...
     */
    double (*result)(Pythagoras *shape);
};

/**
 * Functions
 */
double calc(Pythagoras *object) {
        return object->x * object->y;
}

/**
 * Constructor
 */
Pythagoras _Pythagoras() {
    Pythagoras s;

    s.x = 1;
    s.y = 1;

    s.result = calc;

    return s;
}
