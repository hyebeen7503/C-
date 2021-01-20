#include <iostream>

int main(void){
    int num=0;
    int input;

    for (int i = 1; i <= 5; i++){
        std::cout << i << "번째 정수 입력 : ";
        std::cin >> input;
        num += input;
    }

    std::cout << "합계 : " << num;

    return 0;
}