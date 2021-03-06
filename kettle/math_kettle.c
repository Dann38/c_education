#include "headlines.h"

float fun_cooling(float x, float y, c_kettle *kettle);

point * eiler(c_kettle *kettle, point * points, int n){ 
    float k1, k2, k3, k4, y_next, xi, yi;
    points[0].y = kettle->y0;
    points[0].x = kettle->x0;
    float h = kettle->h;

    for (int i=0; i < n; i++){
        xi = points[i].x;
        yi = points[i].y;
 
        k1 = fun_cooling(xi, yi, kettle);
        k2 = fun_cooling(xi+h/2, yi+h/2*k1, kettle);
        k3 = fun_cooling(xi+h/2, yi+h/2*k2, kettle);
        k4 = fun_cooling(xi+h, yi+h*k3, kettle);
        
        y_next = yi+h/6*(k1+2*k2+2*k3+k4);
        points[i+1].y = y_next;
        points[i+1].x = xi+h;
    }
    return points; 
}

float fun_cooling(float x, float y, c_kettle *kettle){
    float res = kettle->k*(kettle->Tenv-y);
    return res;
}