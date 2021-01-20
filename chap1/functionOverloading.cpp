#include <iostream>

//C언어는 함수 오버로딩 -> 오류발생 : C언어는 함수를 이름으로 구분하기 때문
//C++은 함수의 이름과 인자정보를 조합해서 함수를 구분함 -> 함수 오버로딩 가능 !

void MyFunc(void){
    std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(int a){
    std::cout << "MyFunc(int a) called"<<std::endl;
}

void MyFunc(char a){
    std::cout << "MyFunc(char c) called" << std::endl;
}

int main(void){
    MyFunc();
    MyFunc(2);
    MyFunc('A');

    return 0;
}