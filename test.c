#include <stdio.h>
#include <math.h>
#include "max.h"

// void testLoop(int count);

int main(int argc, char const *argv[]){

    int age=3;
    int a = 1;
    int b = 2;
    printf("hello world\n");
    printf("age: %d \n",age);
    printf("max: %d \n",max(a,b));
    printf("sqrt: %f \n", sqrt(2));
    testLoop(10);
    return 0;
}


void testLoop(int count){
    while(count>0){
        printf("count: %d\n",count);
    }
}

