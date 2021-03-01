#include "input.h"
#include <stdlib.h>
typedef struct t_point {
    float x, y;
} point;

int main(){
    c_kettle (*const_kettle) = malloc(sizeof(c_kettle));    
    const_kettle->h = 0.1;
    const_kettle->x0 = 0;
    const_kettle->y0 = 100;
    //input();
    test_input(const_kettle);
    //n = x1/h;
    //point (*points) = malloc(n * sizeof(point));
    //points = eiler(Tenv, k, x1, points);
    //print_kettle(points);
    //free(points);
    return 0;
}


