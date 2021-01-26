#include <iostream>

int val = 100;

int SimpleFunc(void){
    int val = 20;
    val += 3;
    ::val += 5;
}
