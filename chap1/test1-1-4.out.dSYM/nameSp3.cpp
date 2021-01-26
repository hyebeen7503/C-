#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void);
}

namespace BestComImpl{
    void PrettyFunc(void);
}

namespace ProgComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void){
    std::cout << "BestComImpd에서 정의한 함수" << std::endl;
    PrettyFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void){
    std::cout << "BestcomImpl에서 정의한 PrretyFunc함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void){
    std::cout << "ProgComImpl에서 정의한 함수" << std::endl;
}