#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "input.h"

void input(c_kettle *kettle){
    setlocale(LC_ALL, "Russian");
    printf("Введите температуру среды:\n");
    scanf("%f", &kettle->Tenv);    
    printf("Введите коэффициент остывания:\n");
    scanf("%f", &kettle->k);    
    printf("Введите время:\n");
    scanf("%f", &kettle->x1);    
}

void test_input(c_kettle *kettle){
    kettle->Tenv = 60;
    kettle->k = 0.2;
    kettle->x1 = 10;
    
}
