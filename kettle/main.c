#include "headlines.h"
#include <stdlib.h>
#include <stdio.h>

//extern void input(c_kettle *kettle);
//extern void test_input(c_kettle *kettle);



int main(){
    c_kettle (*const_kettle) = malloc(sizeof(c_kettle));    
    const_kettle->h = 0.1;
    const_kettle->x0 = 0;
    const_kettle->y0 = 100;
    
    test_input(const_kettle);
    
    int n = const_kettle->x1 / const_kettle->h;
    point (*points) = malloc(n * sizeof(point));

    points = eiler(const_kettle, points, n);
    print_kettle(points, n);
    free(points);
    return 0;
}