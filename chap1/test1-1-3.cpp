#include <iostream>

int main(void){
    int input;
    std::cout << "숫자를 입력해주세요 : ";
    std::cin >> input;

    for (int i = 1; i < 10; i++){
        std::cout << input << "X" << i << "=" << input * i << std::endl;
    }

        return 0;
}