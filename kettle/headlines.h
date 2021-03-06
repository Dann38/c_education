typedef struct const_kettle {
    float Tenv, k, x1;
    float h, x0, y0;
} c_kettle;

typedef struct t_point {
    float x, y;
} point;


void input(c_kettle *kettle);
void test_input(c_kettle *kettle);
void print_kettle(point *array, int n);

point * eiler(c_kettle *kettle, point * points, int n);
