typedef struct const_kettle {
    float Tenv, k, x1;
    float h, x0, y0;
} c_kettle;


void input(c_kettle *kettle);
void test_input(c_kettle *kettle);
