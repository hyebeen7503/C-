#include <iostream>

int main(void){
    //cin을 통해서 데이터를 입력받을 때는 스페이스 바, 엔터 등의 공백을 통해 이뤄짐
    //for문 안에서 지역변수 설정 가능
    int val1, val2;
    std::cout << "두 개의 변수 숫자를 입력하세요 : " << std::endl;
    int result=0;
    std::cin>>val1>>val2;

    std::cout << val1 << std::endl;

    if (val1>val2){
        for (int i = val1 + 1; i < val2;i++){
            result = i + 1;
        }
    }
    else
    {
        for (int i = val2 + 1; i < 10; i++){
            result = i + 1;
        }
    }

    std::cout << "두 수 사이의 정수 합 : " <<result<< std::endl;
    

    return 0;
}