#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "input.h"

void input(c_kettle *kettle){
    //setlocale(LC_ALL, "Russian");
    //printf("Введите температуру среды:\n");
    //scanf("%f", &Tenv);    
    //printf("Введите коэффициент остывания:\n");
    //scanf("%f", &k);    
    //printf("Введите время:\n");
    //scanf("%d", &x1);    
}

void test_input(c_kettle *kettle){
    kettle->Tenv = 60;
    kettle->k = 0.2;
    kettle->x1 = 10;
    printf("%f", kettle->k);
}
