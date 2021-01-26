#include <iostream>
using namespace std;

int main(void){
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref1 = num;
    int *(&ref2) = ptr;
    int **(&ref3) = dptr;

    cout << ref1 << endl;
    cout << *ref2 << endl;
    cout << **ref3 << endl;

    return 0;
}