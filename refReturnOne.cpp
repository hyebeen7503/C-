#include <iostream>
using namespace std;

int& RefReturnOne(int &ref){
    ref++;
    return ref;
}

int main(void){
    int num1 = 1;
    int &num2 = RefReturnOne(num1);

    num1++;
    num2++;

    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}