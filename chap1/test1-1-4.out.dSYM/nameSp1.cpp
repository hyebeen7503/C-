#include <iostream>

namespace BestcomImpl{
    void SimpleFunc(void){
        std::cout << "Bestcom이 정의한 함수" << std::endl;
    }
}

namespace ProgComImpl{
    void SimpleFunc(void){
        std::cout << "ProgCom이 정의한 함수" << std::endl;
    }
}

int main(void){
    BestcomImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}