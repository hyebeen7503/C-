#include<iostream>

int main(void){
    int val1; //출력과 마찬가지로 별도의 서식 설정 필요없음
    std::cout << "첫 번째 숫자 입력 : ";
    std::cin >> val1; //cin : console input -> 입력받은 숫자를 val1에 넣는다.

    int val2;
    std::cout << "두 번째 숫자 입력 : ";
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << "덧셈결과 : " << result << std::endl;
}