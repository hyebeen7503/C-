#include <iostream>
using namespace std;

//true, false는 C에 이미 정의된 Boolean
//C에서는 1, 0 을 참과 거짓으로 나타낼 수 없음 !!

int main(void){
    int num = 10;
    int i = 0;

    cout << "true : " << true << endl;
    cout << "false : " << false << endl;

    while(true){
        cout << i++ << ' ';
        if (i>num)
            break;
    }
    cout << endl;

    cout << "sizeof 1: " << sizeof(1) << endl;
    cout << "sizeof 2: " << sizeof(2) << endl;
    cout << "sizeof true: " << sizeof(true) << endl;
    cout << "sizeof false: " << sizeof(false) << endl;

    return 0;
}