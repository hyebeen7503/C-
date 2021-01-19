#include <iostream>

int main(void)
{
    int num = 20;
    //C와 달리 출력의 대상에 따라 서식지정을 달리할 필요 없음
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello "
              << "World!" << std::endl; //<<는 엮어서 여러개 표현 가능함
    std::cout << num << ' ' << 'A'; //' ' 공백표시
    std::cout << ' ' << 3.14 << std::endl;
    return 0;
}