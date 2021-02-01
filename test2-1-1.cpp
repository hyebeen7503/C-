#include <iostream>
using namespace std;

void Plus(int &ref){
    ref++;
}

int Sign(int &ref){
    ref *= (-1);
}

int main(void){
    int val1 = 3;
    int val2 = -33;
    Plus(val1);
    Sign(val2);

    cout << "val1 : " << val1 << endl;
    cout << "val2 : " << val2 << endl;

    return 0;
}