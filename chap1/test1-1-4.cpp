#include <iostream>

int main(void){
    while(1){

    int input;
    std::cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
    std::cin >> input;

    if(input != -1){
        int result = 50 + input * 0.12;
        std::cout << "이번 달 급여 : " << result << "만원"<<std::endl;
    }

    else
    {
        std::cout << "프로그램을 종료합니다." << std::endl;
        break;
    }
    }

    return 0;
}