#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main() {    
    char name[100];
    int age;
    char initial;
    float grade;
    scanf("%s\n", &name);
    scanf("%d\n", &age);
    scanf("%c\n", &initial);
    scanf("%f\n", &grade);
    scanf("\n");
    printf("Name is %s\n", name);
    printf("Age is %d\n", age);
    printf("Initial is %c\n", initial);
    printf("Grade is %.2f\n", grade);
    return 0;
}