#include <stdio.h>
#include <math.h>
#include "max.h"

struct Student
{
    char name[100];
    int age;
};


void testLoop(int count);

void swap(int array[]){
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;
}

void testSwap(){
    int array[2];
    array[0] = 1;
    array[1] = 2;
    printf("array[0]: %d, array[1]: %d\n",array[0],array[1]);
    swap(array);
    printf("array[0]: %d, array[1]: %d \n",array[0],array[1]);
}

void testString(){
    char tsr[]="hello world";
    printf("testString: %s. size: %d\n", tsr, sizeof(tsr));
}

void testStruct(){
   struct Student student;
   student.age = 12;
   printf("testStruct: age: %d\n", student.age);
}

int main(int argc, char const *argv[]){

    int age=3;
    int a = 1;
    int b = 2;
    printf("hello world\n");
    printf("age: %d \n",age);
    printf("max: %d \n",max(a,b));
    printf("sqrt: %f \n", sqrt(2));
    testLoop(10);
    testSwap();
    testString();
    return 0;
}


void testLoop(int count){
    while(count>0){
        printf("count: %d\n",count);
        count--;
    }
}



